#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    struct Query {
        int L;
        int R;
        int index;
    };

    static int block_size;

    // Compare function for sorting queries in Mo's order
    static bool compare(Query a, Query b) {
        int block_a = a.L / block_size;
        int block_b = b.L / block_size;

        if (block_a != block_b)
            return block_a < block_b;
        return a.R < b.R;  // Fixed: 'B.R' was incorrect
    }

    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& rawQueries) {
        int n = arr.size();
        int q = rawQueries.size();
        block_size = sqrt(n);

        // Step 1: Convert raw queries into structured Query objects
        vector<Query> queries(q);
        for (int i = 0; i < q; i++) {
            queries[i] = {rawQueries[i][0], rawQueries[i][1], i};
        }

        // Step 2: Sort the queries using Mo's algorithm
        sort(queries.begin(), queries.end(), compare);

        vector<int> answers(q);
        int currL = 0, currR = 0, currSum = 0;

        // Step 3: Process each query
        for (auto& query : queries) {
            int L = query.L;
            int R = query.R;

            // Remove elements from left
            while (currL < L) {
                currSum -= arr[currL];
                currL++;
            }

            // Remove elements from right
            while (currR > R + 1) {
                currR--;
                currSum -= arr[currR];
            }

            // Add elements to left
            while (currL > L) {
                currL--;
                currSum += arr[currL];
            }

            // Add elements to right
            while (currR <= R) {
                currSum += arr[currR];
                currR++;
            }

            answers[query.index] = currSum;
        }

        return answers;
    }
};

// Initialize static variable
int Solution::block_size = 0;

int main() {
    Solution obj;
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> queries(q, vector<int>(2));
    for (int i = 0; i < q; i++) {
        cin >> queries[i][0] >> queries[i][1];
    }

    vector<int> result = obj.rangeSumQueries(arr, queries);
    for (int ans : result) {
        cout << ans << '\n';
    }

    return 0;
}
