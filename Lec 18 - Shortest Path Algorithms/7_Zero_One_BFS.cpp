/*
Given a graph where every edge has weight as either 0 or 1. A source vertex is 
also given in the graph. Find the shortest path from source vertex to every 
other vertex.

In normal BFS of a graph all edges have equal weight but in 0-1 BFS some edges 
may have 0 weight and some may have 1 weight. In this we will not use bool array 
to mark visited nodes but at each step we will check for the optimal distance 
condition. We use double ended queue to store the node. While performing BFS if a 
edge having weight = 0 is found node is pushed at front of double ended queue and 
if a edge having weight = 1 is found, it is pushed at back of double ended queue.

The approach is similar to Dijkstra that the if the shortest distance to node is 
relaxed by the previous node then only it will be pushed in the queue.

The above idea works in all cases, when pop a vertex (like Dijkstra), it is the 
minimum weight vertex among remaining vertices. If there is a 0 weight vertex 
adjacent to it, then this adjacent has same distance. If there is a 1 weight 
adjacent, then this adjacent has maximum distance among all vertices in dequeue 
(because all other vertices are either adjacent of currently popped vertex or 
adjacent of previously popped vertices).
*/

#include <bits/stdc++.h>
using namespace std;

// Wrapper class for Graph
// Wrapper class for Graph
class Graph {
    int V;
    list<pair<int, int>> *adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    void ZeroOneBFS(int src);  // Implemented below
};

void Graph::ZeroOneBFS(int src) {
    int* dist = new int[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    
    // Doubly ended queue to do BFS
    deque<int> dq;
    dist[src] = 0;
    dq.push_back(src);

    while (!dq.empty()) {
        int v = dq.front();
        dq.pop_front();

        

    }
}
