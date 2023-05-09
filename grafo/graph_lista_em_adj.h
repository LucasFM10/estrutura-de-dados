// graph.h
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <fstream>
#include <algorithm>

class Graph {
public:
    Graph(int num_vertices);
    void add_edge(int vertex1, int vertex2, int weight);
    void bfs(int start_vertex, int target_vertex);
    void dfs(int start_vertex, int target_vertex);

private:
    void bfs_helper(int vertex, std::vector<bool>& visited, std::vector<int>& parent);
    void dfs_helper(int vertex, std::vector<bool>& visited, std::vector<int>& path);

    int num_vertices;
    std::vector<std::vector<std::pair<int, int>>> adj_list;
};

#endif // GRAPH_H

