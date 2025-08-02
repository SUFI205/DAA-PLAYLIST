/////q1)
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void shortest_distance(vector<vector<int>>& matrix) {
//    int n = matrix.size();
//    const int INF = 1e9;
//
//    // Replace -1 with INF to denote no path
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (matrix[i][j] == -1)
//                matrix[i][j] = INF;
//            if (i == j)
//                matrix[i][j] = 0;
//        }
//    }
//
//    // Floyd-Warshall Algorithm
//    for (int k = 0; k < n; k++) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (matrix[i][k] < INF && matrix[k][j] < INF)
//                    matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
//            }
//        }
//    }
//
//    // Convert INF back to -1
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (matrix[i][j] == INF)
//                matrix[i][j] = -1;
//        }
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of vertices: ";
//    cin >> n;
//
//    vector<vector<int>> matrix(n, vector<int>(n));
//
//    cout << "Enter the adjacency matrix (-1 for no path):" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//
//    shortest_distance(matrix);
//
//    cout << "Shortest distance matrix:" << endl;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


///q3)

