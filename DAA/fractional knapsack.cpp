#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    vector<int> value(n), weight(n);
    vector<pair<double, int>> ratioIndex; // pair of (value/weight, index)

    cout << "Enter value and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> value[i] >> weight[i];
        double ratio = (double)value[i] / weight[i];
        ratioIndex.push_back({ratio, i});
    }

    // Sort items by decreasing value/weight ratio
    sort(ratioIndex.rbegin(), ratioIndex.rend());

    double totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        int idx = ratioIndex[i].second;

        if (capacity >= weight[idx]) {
            totalValue += value[idx];
            capacity -= weight[idx];
        } else {
            totalValue += value[idx] * ((double)capacity / weight[idx]);
            break;
        }
    }

    cout << "Maximum value in knapsack = " << totalValue << endl;

    return 0;
}

