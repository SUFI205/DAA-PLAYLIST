//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//// Function to find and print the LCS
//void findLCS(const string& seq1, const string& seq2) {
//    int m = seq1.size();
//    int n = seq2.size();
//
//    // Create a DP table to store lengths of LCS
//    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//
//    // Fill the dp table
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (seq1[i - 1] == seq2[j - 1])
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            else
//                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//        }
//    }
//
//    // Reconstruct the LCS from the dp table
//    int i = m, j = n;
//    string lcs = "";
//
//    while (i > 0 && j > 0) {
//        if (seq1[i - 1] == seq2[j - 1]) {
//            lcs += seq1[i - 1];
//            --i;
//            --j;
//        } else if (dp[i - 1][j] > dp[i][j - 1]) {
//            --i;
//        } else {
//            --j;
//        }
//    }
//
//    // LCS was built backwards, so reverse it
//    reverse(lcs.begin(), lcs.end());
//
//    // Output the result
//    cout << "Longest Common Subsequence: " << lcs << endl;
//    cout << "length = " << lcs.length() << endl;
//}
//
//int main() {
//    string seq1, seq2;
//
//    cout << "Sequence1: ";
//    cin >> seq1;
//
//    cout << "Sequence2: ";
//    cin >> seq2;
//
//    findLCS(seq1, seq2);
//
//    return 0;
//}
//


#include <iostream>
#include <vector>
using namespace std;

// Function to solve 0-1 Knapsack problem
void knapsack(int n, const vector<int>& weights, const vector<int>& values, int capacity) {
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the dp table
    for (int i = 1; i <= n; ++i) {
        for (int w = 0; w <= capacity; ++w) {
            if (weights[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    // Maximum value
    int maxValue = dp[n][capacity];
    cout << "Maximum value: " << maxValue << endl;

    // Backtrack to find selected items
    int w = capacity;
    cout << "Selected items (index, weight, value):" << endl;
    for (int i = n; i > 0 && w > 0; --i) {
        if (dp[i][w] != dp[i - 1][w]) {
            // Item i-1 is included
            cout << "Item " << i << ": Weight = " << weights[i - 1]
                 << ", Value = " << values[i - 1] << endl;
            w -= weights[i - 1];
        }
    }
}

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    vector<int> weights(n), values(n);

    cout << "Enter weights of items: ";
    for (int i = 0; i < n; ++i)
        cin >> weights[i];

    cout << "Enter values of items: ";
    for (int i = 0; i < n; ++i)
        cin >> values[i];

    int capacity;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    knapsack(n, weights, values, capacity);

    return 0;
}

