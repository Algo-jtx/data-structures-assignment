# DATA STRUCTURES AND ALGORITHMS
## Assignment 1 – Queue Implementation in C

---

# 1. Data Structure Classification

Data Structures are categorized into:

## A. Primitive Data Structures
- int
- float
- char
- double

## B. Non-Primitive Data Structures

### 1. Linear Data Structures
- Array
- Stack
- Queue
- Linked List

### 2. Non-Linear Data Structures
- Tree
- Graph

Queue belongs to **Linear Data Structures** because elements are arranged sequentially.

---

# 2. Introduction to Queue

A **Queue** is a linear data structure that follows the **FIFO (First In First Out)** principle.

This means:
- The first element inserted is the first element removed.

### Real Life Example
- People lining up at a bank
- Cars at a toll station
- Printer job scheduling

---

# 3. Types of Queues Implemented

This project implements three types of queues:

1. Linear Queue (Array Based)
2. Circular Queue (Array Based)
3. Linked Queue (Linked List Based)

---

# 4. Linear Queue

## Description
- Implemented using a fixed-size array.
- Uses two pointers:
  - `front`
  - `rear`
- Enqueue happens at rear.
- Dequeue happens at front.

## Limitation
After several dequeue operations, unused spaces at the beginning cannot be reused.

## When to Use
- Simple tasks
- Small data sets
- Situations where queue size is predictable

---

# 5. Circular Queue

## Description
- Improves linear queue.
- Uses modulo operation to reuse empty spaces.
- The queue behaves like a circle.


## Advantages
- No memory wastage
- Efficient use of fixed-size array
- Suitable for cyclic processes

## When to Use
- CPU Round Robin Scheduling
- Streaming data buffers
- Embedded systems

---

# 6. Linked Queue

## Description
- Implemented using linked list.
- Each node contains:
  - Data
  - Pointer to next node
- Uses dynamic memory allocation.

## Advantages
- No fixed size limit
- Memory efficient
- Flexible growth

## When to Use
- When queue size is unknown
- Large dynamic systems
- Server request handling

---

# 7. Queue Operations

| Operation   | Description                     | Time Complexity |
|------------|---------------------------------|-----------------|
| Enqueue    | Insert element at rear          | O(1)            |
| Dequeue    | Remove element from front       | O(1)            |
| Display    | Show queue elements             | O(n)            |
| isEmpty    | Check if queue is empty         | O(1)            |
| isFull     | Check if queue is full (array)  | O(1)            |

All primary operations run in constant time O(1).

---

# 8. Applications of Queue

## 1. CPU Scheduling

Operating systems use queues to manage processes.

Example:
- Round Robin algorithm uses Circular Queue.
- Each process gets equal time slice.

Reason:
Ensures fairness and prevents starvation.

---

## 2. Printer Spooling

Print jobs are stored in a queue.

Reason:
Jobs must be processed in the order they were received.

---

## 3. Breadth First Search (BFS)

Queue is used in BFS graph traversal.

Steps:
1. Insert starting node into queue.
2. Remove node.
3. Insert all unvisited neighbors.
4. Repeat until empty.

Reason:
BFS explores nodes level by level using FIFO.

---

## 4. Network Packet Handling

Routers use queues to manage data packets.

Reason:
Packets must be processed in arrival order to maintain consistency.

---

## 5. Customer Service Systems

Examples:
- Bank lines
- Call centers
- Ticket counters

Reason:
Ensures first-come-first-served policy.

---

# 9. How Queues and Algorithms Work in Systems

Queues help systems:

- Manage memory efficiently
- Schedule tasks fairly
- Control resource allocation
- Maintain order of execution
- Improve system stability

Examples in systems:
- Operating Systems (process scheduling)
- Databases (transaction queues)
- Web Servers (request handling)
- Messaging systems (task queues)

Queues are fundamental in designing efficient systems.

---

# 10. Comparison of Queue Types

| Feature        | Linear Queue | Circular Queue | Linked Queue |
|---------------|-------------|---------------|-------------|
| Memory Type   | Fixed Array | Fixed Array   | Dynamic     |
| Wasted Space  | Yes         | No            | No          |
| Size Limit    | Yes         | Yes           | No          |
| Implementation| Simple      | Moderate      | Moderate    |
| Best Use      | Small tasks | Cyclic tasks  | Dynamic size|

---

# 11. Conclusion

Queue is a fundamental linear data structure that follows FIFO principle.

It is widely used in:
- Operating systems
- Networking
- Graph algorithms
- Real-time systems

Understanding queues improves:
- Algorithm design skills
- System development skills
- Problem solving ability

---

Source Code File:
queues.c