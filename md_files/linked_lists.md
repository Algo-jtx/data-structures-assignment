## Linked Lists – Data Structures Classification  


---

## Data Structure Classification Context
Linked Lists fall under the following classification:

- **Non-Primitive Data Structures**
  - Store multiple data elements
  - Can represent complex relationships

- **Linear Data Structures**
  - Data elements are arranged sequentially
  - Each element has a logical order

- **Dynamic Data Structures**
  - Memory size can change at runtime
  - Efficient memory utilization

---

## What Is a Linked List?
A **Linked List** is a linear data structure in which elements (called **nodes**) are stored in non-contiguous memory locations.  
Each node contains:
- **Data** – the value being stored
- **Link (pointer/reference)** – points to the next node in the list

Unlike arrays, linked lists do **not require contiguous memory**, making them flexible and efficient for dynamic data handling.

---

## Types of Linked Lists

### 1. Singly Linked List
Each node points to the **next node only**.

**Characteristics**
- Traversal is one-directional
- Uses less memory than other linked lists
- Simple to implement

**Applications**
- Music playlists
- Browser history navigation
- Simple memory management systems

---

### 2. Doubly Linked List
Each node points to both the **next and previous nodes**.

**Characteristics**
- Bidirectional traversal
- Easier deletion of nodes
- Uses more memory than singly linked lists

**Applications**
- Undo and redo functionality
- Navigation systems
- File system navigation

---

### 3. Circular Linked List
The last node points back to the **first node**, forming a loop.

**Characteristics**
- No `NULL` pointers
- Continuous traversal
- Efficient for repeated cycles

**Applications**
- CPU scheduling (round-robin scheduling)
- Multiplayer games
- Circular buffers

---

##  Basic Linked List Operations
The following operations are commonly performed on linked lists:
- Insertion (at beginning, middle, or end)
- Deletion
- Traversal
- Searching
- Updating nodes

> Note: Detailed implementations of these operations are provided in the source code files within this repository.

---

## Algorithms Used with Linked Lists
Linked lists are commonly used with algorithms such as:
- Traversal algorithms
- Searching algorithms (Linear Search)
- Sorting algorithms (Merge Sort is preferred)
- Memory allocation algorithms

### Why Merge Sort Is Preferred
- Does not require random access
- Efficient for linked list structure
- Time complexity: **O(n log n)**

---

## Applications of Linked Lists in Real Systems

### Operating Systems
- Process scheduling
- Memory management
- File systems

### Software Applications
- Media players (playlists)
- Web browsers (history tracking)
- Text editors (undo/redo functionality)

### Data Management
- Dynamic memory allocation
- Implementation of stacks and queues
- Hash table chaining

---

## Why Linked Lists Are Used
Linked lists are preferred over arrays when:
- The size of data is unknown
- Frequent insertions and deletions are required
- Efficient memory usage is important
- Dynamic data handling is needed

**Advantages**
- Dynamic size
- Efficient insertion and deletion
- No memory wastage

**Limitations**
- Slower access compared to arrays
- Extra memory for pointers
- No direct indexing

---

## 🔄 How Linked Lists Work Within Systems
Within computer systems:
- Linked lists manage dynamic memory efficiently
- They support system-level operations like task scheduling
- They serve as foundational structures for higher-level abstractions

Linked lists work together with algorithms to ensure:
- Optimized memory usage
- Efficient data processing
- Scalability in system design

---

<!-- ## 🤝 GitHub Collaboration
This project is stored in a GitHub repository as part of a group assignment.
- All linked list implementations are included as source files
- Each group member submits their individual GitHub account on VLMS
- This repository demonstrates both **technical implementation** and **research understanding** -->

---
## Overview
This project focuses on **Linked Lists** as a classification under **Non-Primitive → Linear → Dynamic Data Structures**.  
The goal is to demonstrate understanding of:
- What linked lists are
- How they are classified
- Where and why they are used
- How linked lists and algorithms operate within computer systems

All code implementations are contained in separate source files within this repository.  
This `.md` serves as the **research documentation and presentation** for the assignment.

---

## Conclusion
Linked lists are a fundamental data structure in computer science, offering flexibility and efficiency for dynamic data handling.  
This project demonstrates:
- Proper classification of linked lists
- Understanding of linked list types
- Real-world applications and justifications
- The role of linked lists and algorithms within computer systems

---

##  References
- Data Structures Lecture Notes (VLMS)
- Computer Science textbooks
- Online programming documentation