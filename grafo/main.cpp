// main.cpp
#include "graph.h"

int main() {
    std::ifstream input_file("graph_data.txt");

    if (!input_file) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;
    }

    int num_vertices;
    input_file >> num_vertices;
    Graph graph(num_vertices);

    for (int i = 0; i < num_vertices; ++i) {
        for (int j = 0; j < num_vertices; ++j) {
            int weight;
            input_file >> weight;
            if (weight != 0) {
                graph.add_edge(i, j, weight);
            }
        }
    }

    input_file.close();

    std::cout << "Caminho BFS entre 0 e 3:" << std::endl;
    graph.bfs(0, 3);

    std::cout << "Caminho DFS entre 0 e 3:" << std::endl;
    graph.dfs(0, 3);

    return 0;
}


