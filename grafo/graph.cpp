// graph.cpp
#include "graph.h"

Graph::Graph(int num_vertices) : num_vertices(num_vertices) {
    adj_matrix.resize(num_vertices, std::vector<int>(num_vertices, 0));
}

void Graph::add_edge(int vertex1, int vertex2, int weight) {
    adj_matrix[vertex1][vertex2] = weight;
    adj_matrix[vertex2][vertex1] = weight;
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

        for (int neighbor = 0; neighbor < num_vertices; ++neighbor) {
            int weight = adj_matrix[current_vertex][neighbor];
            if (weight != 0 && !visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
                parent[neighbor] = current_vertex;
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

            for (int neighbor = 0; neighbor < num_vertices; ++neighbor) {
                int weight = adj_matrix[current_vertex][neighbor];
                if (weight != 0 && !visited[neighbor]) {
                    stack.push(neighbor);
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

