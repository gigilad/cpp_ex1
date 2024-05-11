// Id: 315284554 ,Email : gilada8892@gmail.com
# Task 1 - Graphs (Classes and Namespaces)

The goal of this project is to create a class for representing graphs and implementing algorithmic functions for those graphs. We will represent a graph using an adjacency matrix. The graph can be directed, undirected, weighted, or even have negative cycles.

## Graph.cpp
This class represents a graph.

### Functions:
- `loadGraph(g)`: Load the matrix to an object.
- `printGraph(g)`: Print the number of vertices and edges in the graph.
- `getNumVertices()`: Return the number of vertices in the graph.
- `getIsDirected()`: Return a boolean indicating if the graph is directed.
- `getIsWeighted()`: Return a boolean indicating if the graph is weighted.

## Algorithms.cpp
This class contains functions to be used on graphs.

### Functions:
- `bool isConnected(g)`: Check if there is a path from every vertex to every other vertex. Returns a boolean.
- `shortestPath(g, start, end)`: Find the shortest path from the "start" vertex to the "end" vertex. This is implemented using the Bellman-Ford algorithm, which also detects negative cycles. This function returns a string representing the shortest path if it exists, otherwise, it returns "-1".
- `isContainsCycle(g)`: Check if the graph contains any cycles using the Depth-First Search (DFS) algorithm. If a cycle is found, it will be printed, and the function will return true; otherwise, it returns false. For DFS, a `dfsUtil` function has been created to run DFS recursively and check for cycles.
- `isBipartite(g)`: This algorithm checks if the graph is bipartite using the Breadth-First Search (BFS) algorithm. It assigns each vertex a number (0/1) if there is a way to partition the vertices so that the graph becomes bipartite. If a bipartition exists, it returns a string containing the two groups; otherwise, it returns "0".
- `negativeCycle(g)`: This algorithm checks if there is any negative cycle in the graph using the Bellman-Ford algorithm. If a negative cycle is found, it will be printed; otherwise, it prints that there is no negative cycle.


  
