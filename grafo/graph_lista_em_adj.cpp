// graph.cpp
#include "graph.h"

Graph::Graph(int num_vertices) : num_vertices(num_vertices) {
    adj_list.resize(num_vertices);
}

void Graph::add_edge(int vertex1, int vertex2, int weight) {
    adj_list[vertex1].push_back({vertex2, weight});
    adj_list[vertex2].push_back({vertex1, weight});
}

void Graph::bfs(int start_vertex, int target_vertex) {
    std::vector<bool> visited(num_vertices, false);
    std::vector<int> parent(num_vertices, -1);

    std::queue<int> q;
    q.push(start_vertex);
    visited[start_vertex] = true;

    bool found = false;

    while (!q.empty()) {
        int current_vertex = q.front();
        q.pop();

        if (current_vertex == target_vertex) {
            found = true;
            break;
        }

        for (const auto& neighbor : adj_list[current_vertex]) {
            int neighbor_vertex = neighbor.first;
            int weight = neighbor.second;
            if (!visited[neighbor_vertex]) {
                q.push(neighbor_vertex);
                visited[neighbor_vertex] = true;
                parent[neighbor_vertex] = current_vertex;
            }
        }
    }

    if (found) {
        std::vector<int> path;
        int temp = target_vertex;
        while (temp != -1) {
            path.push_back(temp);
            temp = parent[temp];
        }

        // Inverter o vetor path
        std::reverse(path.begin(), path.end());

        for (size_t i = 0; i < path.size(); ++i) {
            std::cout << path[i];
            if (i != path.size() - 1) std::cout << " -> ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Nao ha caminho entre os vertices." << std::endl;
    }
}

void Graph::dfs(int start_vertex, int target_vertex) {
    std::vector<bool> visited(num_vertices, false);
    std::vector<int> path;

    std::stack<int> stack;
    stack.push(start_vertex);

    bool found = false;

    while (!stack.empty()) {
        int current_vertex = stack.top();
        stack.pop();

        if (!visited[current_vertex]) {
            visited[current_vertex] = true;
            path.push_back(current_vertex);

            if (current_vertex == target_vertex) {
                found = true;
                break;
            }

            for (const auto& neighbor : adj_list[current_vertex]) {
                int neighbor_vertex = neighbor.first;
                int weight = neighbor.second;
                if (!visited[neighbor_vertex]) {
                    stack.push(neighbor_vertex);
                }
            }
        }
    }

    if (found) {
        for (size_t i = 0; i < path.size(); ++i) {
            std::cout << path[i];
            if (i != path.size() - 1) std::cout << " -> ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Nao ha caminho entre os vertices." << std::endl;
    }
}

