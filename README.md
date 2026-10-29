
# File System Representation and Search Using BFS and DFS

## Description
This project implements a file system as a graph using an adjacency matrix in C. Each file or directory is represented as a node, and the connections between them are represented as edges.

The program uses Breadth-First Search (BFS) and Depth-First Search (DFS) to search for a specified file and displays the traversal order and search result.

## Objectives
- Represent a file system using a graph.
- Implement BFS and DFS algorithms in C.
- Display the traversal order.
- Check whether the specified file is found.

## Technologies Used
- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS

## How to Run
1. Save the program as `main.c`.
2. Compile the program using a C compiler.
3. Run the executable.
4. Enter the number of nodes, adjacency matrix, starting node, and target node.

## Sample Input
```text
4
0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
0
3
```

## Sample Output
```text
BFS Traversal: 0 1 2 3
File found using BFS.

DFS Traversal: 0 1 3 2
File found using DFS.
```

## Conclusion
This project demonstrates how a graph can represent a file system and how BFS and DFS can be used to traverse the graph and search for a specified file.
