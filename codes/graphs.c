#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

/* =========================
   Graph Node Structure
   ========================= */
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

/* =========================
   Graph Structure
   ========================= */
typedef struct Graph {
    int numVertices;
    Node* adjList[MAX_VERTICES];
    int visited[MAX_VERTICES];
} Graph;

/* =========================
   Create a New Node
   ========================= */
Node* createNode(int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

/* =========================
   Create a Graph
   ========================= */
Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        graph->adjList[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

/* =========================
   Add Edge (Undirected Graph)
   ========================= */
void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = createNode(dest);
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjList[dest];
    graph->adjList[dest] = newNode;
}

/* =========================
   Display Graph
   ========================= */
void displayGraph(Graph* graph) {
    for (int v = 0; v < graph->numVertices; v++) {
        Node* temp = graph->adjList[v];
        printf("Vertex %d: ", v);
        while (temp) {
            printf("-> %d ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

/* =========================
   Depth First Search (DFS)
   ========================= */
void DFS(Graph* graph, int vertex) {
    Node* adjList = graph->adjList[vertex];
    Node* temp = adjList;

    graph->visited[vertex] = 1;
    printf("%d ", vertex);

    while (temp != NULL) {
        int connectedVertex = temp->vertex;

        if (graph->visited[connectedVertex] == 0) {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}

/* =========================
   Breadth First Search (BFS)
   ========================= */
void BFS(Graph* graph, int startVertex) {
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;

    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = 0;
    }

    graph->visited[startVertex] = 1;
    queue[rear++] = startVertex;

    while (front < rear) {
        int currentVertex = queue[front++];
        printf("%d ", currentVertex);

        Node* temp = graph->adjList[currentVertex];
        while (temp) {
            int adjVertex = temp->vertex;
            if (graph->visited[adjVertex] == 0) {
                graph->visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }
            temp = temp->next;
        }
    }
}

/* =========================
   Main Function
   ========================= */
int main() {
    Graph* graph = createGraph(5);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    printf("Adjacency List Representation:\n");
    displayGraph(graph);

    printf("\nDFS Traversal starting from vertex 0:\n");
    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = 0;
    }
    DFS(graph, 0);

    printf("\n\nBFS Traversal starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}