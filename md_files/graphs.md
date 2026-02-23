## Graphs – Data Structures Classification  

---


Graphs are used to model **relationships, connections, and dependencies** between data elements.  
They are a core structure in modern computing systems such as operating systems, computer networks, databases, artificial intelligence, and web technologies.

This document focuses on:
- Classification of graphs
- How graphs are structured
- Types of graphs
- Applications of graph data structures
- Algorithms used with graphs
- How graphs and algorithms work within systems

All **graph code implementations** are written in a programming language of choice and stored separately in the group GitHub repository, as required.

---

## 2. Data Structure Classification Context (Based on VLMS Notes)

Graphs fall under the following classification:

### Non-Primitive Data Structures
- Store multiple values
- Can represent complex and abstract relationships
- Built using primitive data types

### Non-Linear Data Structures
- Data elements are not arranged sequentially
- One element can be connected to many others
- Traversal does not follow a single straight path

### Dynamic Data Structures
- Memory allocation occurs at runtime
- Nodes and edges can be added or removed dynamically
- Efficient for changing and growing systems

---

## 3. What Is a Graph?
A **Graph** is a non-linear data structure composed of:
- **Vertices (Nodes):** Represent entities or objects
- **Edges:** Represent relationships or connections between entities

A graph is formally defined as:

G = (V, E)

Where:
- V is a set of vertices
- E is a set of edges connecting the vertices

Graphs are designed to model real-world systems where **relationships matter more than order**.

---

## 4. Key Graph Terminology
- **Vertex (Node):** A single data point
- **Edge:** A connection between two vertices
- **Degree:** Number of edges connected to a vertex
- **Path:** A sequence of connected vertices
- **Cycle:** A path that begins and ends at the same vertex
- **Connected Graph:** Every vertex can be reached from another
- **Disconnected Graph:** Some vertices are isolated

---

## 5. Types of Graphs and Their Classification

### 5.1 Undirected Graph
Edges have no direction.

**Applications**
- Social networks (mutual friendships)
- Local area networks

**Reason for Use**
- Relationships are two-way
- Simple modeling of mutual connections

---

### 5.2 Directed Graph (Digraph)
Edges have a specific direction.

**Applications**
- Web page links
- Task dependency systems
- Workflow management

**Reason for Use**
- Direction of relationship matters
- Models cause–effect or dependency flows

---

### 5.3 Weighted Graph
Edges have weights representing cost, distance, or time.

**Applications**
- Road networks
- Network routing
- Logistics and supply chain systems

**Reason for Use**
- Enables optimization (shortest path, lowest cost)

---

### 5.4 Cyclic Graph
Contains one or more cycles.

**Applications**
- Feedback systems
- Network loops

---

### 5.5 Acyclic Graph (DAG)
Contains no cycles.

**Applications**
- Task scheduling
- Compiler design
- Dependency resolution systems

**Reason for Use**
- Prevents infinite loops
- Enforces execution order

---

## 6. Graph Representations (Conceptual)

### Adjacency Matrix
- Uses a 2D array
- Fast edge lookup
- High memory usage

### Adjacency List
- Stores edges as lists
- Memory efficient
- Preferred in most systems

Graphs are usually implemented using adjacency lists due to scalability and efficiency.

---

## 7. Graph Operations (Conceptual Overview)
The following operations are performed on graphs:
- Adding a vertex
- Adding an edge
- Removing a vertex
- Removing an edge
- Traversing the graph
- Searching for paths

> Note: All operations are implemented in code and stored in the GitHub repository as required.

---

## 8. Algorithms Used with Graphs

### Breadth-First Search (BFS)
- Traverses level by level
- Used to find shortest paths in unweighted graphs

### Depth-First Search (DFS)
- Explores deeply before backtracking
- Used for cycle detection and connectivity analysis

### Dijkstra’s Algorithm
- Finds the shortest path in weighted graphs
- Used in navigation and routing systems

### Topological Sorting
- Orders tasks in Directed Acyclic Graphs
- Used in scheduling and build systems

---

## 9. Applications of Graphs and Algorithms (With Reasons)

### Operating Systems
- Process scheduling graphs
- Deadlock detection using resource allocation graphs

**Reason**
- Efficient resource management
- Avoids system deadlocks

---

### Computer Networks
- Network topology modeling
- Routing algorithms

**Reason**
- Optimizes data flow
- Ensures reliable communication

---

### Web and Internet Systems
- Web page linking
- Search engine indexing

**Reason**
- Models directional relationships
- Enables efficient crawling and ranking

---

### Software Engineering
- Dependency graphs
- Call graphs

**Reason**
- Helps manage complex systems
- Prevents dependency conflicts

---

### Artificial Intelligence
- State-space graphs
- Knowledge graphs

**Reason**
- Enables intelligent decision-making
- Models complex problem spaces

---

## 10. How Graphs and Algorithms Work Within Systems
Within computing systems:
- Graphs model entities and their relationships
- Algorithms operate on graphs to analyze, optimize, and solve problems

Together, they:
- Improve system efficiency
- Enable automation and optimization
- Support scalability in large systems

Graphs act as the **structural backbone**, while algorithms provide **behavior and logic**.

---

## 11. Why Graphs Are Important

### Advantages
- Models real-world systems naturally
- Supports complex relationships
- Highly scalable and flexible

### Limitations
- More complex than linear structures
- Requires careful traversal and memory handling

---

## 12. GitHub and Group Work (Assignment Requirement)
- All graph code implementations are stored in the group GitHub repository
- Each group member contributes to the repository
- Each student submits their individual GitHub account to VLMS
- This document serves as the **research and explanation component**

---

## 13. Conclusion
Graphs are a fundamental non-linear data structure essential to modern computing.  
They allow systems to represent and process complex relationships efficiently.

This assignment demonstrates:
- Proper data structure classification
- Research-based understanding of graphs
- Real-world applications with justification
- The interaction between data structures and algorithms within systems

---

## 14. References
- Data Structures Lecture Notes (VLMS)
- Standard Computer Science Textbooks
- Online Programming and Algorithm Documentation