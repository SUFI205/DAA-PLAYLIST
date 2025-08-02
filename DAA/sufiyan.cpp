#include<iostream>
#include<vector>
#include<algorithm> 
int main() {
    std::cout << "hello world" << std::endl;

    int v, e;
    std::cout << "Enter number of vertices and edges: ";
    std::cin >> v >> e;

    std::vector<std::pair<int, std::pair<int, int>>> g; // graph as a vector of edges
    int s, d, w;

    std::cout << "Enter edges (source destination weight):\n";
    for (int i = 0; i < e; i++) {
        std::cin >> s >> d >> w;
        g.push_back({w, {s, d}});
    }

    // Sort edges based on weight
    std::sort(g.begin(), g.end());

    // Output the sorted edges
    std::cout << "Sorted edges:\n";
    for (const auto& edge : g) {
        std::cout << edge.second.first << " - " << edge.second.second << " : " << edge.first << '\n';
    }

    return 0;
}   