/////to find the maximum number of activities that can run on uniprocessor
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//    vector<pair<int,int>>activity;
//    int n,start,endd;
//    cout<<"enter the number of activity\n";
//    cin>>n;
//
//    for(int i=0;i<n;i++)
//    {
//        cin>>start>>endd;
//        activity.push_back(make_pair(endd,start));
//    }
//
//    sort(activity.begin(),activity.end());
//
//    int count=0;
//    int correctend=-1;
//
//    for(int i=0;i<n;i++)
//    {
//        if(activity[i].second>correctend)
//        {
//            count++;
//            correctend=activity[i].first;
//        }
//    }
//    cout<<count<<endl;
//}


///q2 ) task scheduling lgorithm
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter number of tasks: ";
//    cin >> n;
//
//    // Pair: {duration, deadline}
//    vector<pair<int, int>> tasks(n);
//
//    cout << "Enter duration and deadline for each task:\n";
//    for (int i = 0; i < n; i++) {
//        cout << "Task " << i + 1 << ": ";
//        cin >> tasks[i].first >> tasks[i].second; // first = duration, second = deadline
//    }
//
//    // Sort by deadline (smallest deadline first)
//    sort(tasks.begin(), tasks.end(), [](pair<int, int> a, pair<int, int> b) {
//        return a.second < b.second;
//    });
//
//    vector<int> selectedDurations;
//    vector<int> selectedIndices;
//    int totalTime = 0;
//
//    for (int i = 0; i < n; i++) {
//        int d = tasks[i].first;
//        int dl = tasks[i].second;
//
//        totalTime += d;
//        selectedDurations.push_back(d);
//        selectedIndices.push_back(i + 1); // use 1-based index for output
//
//        if (totalTime > dl) {
//            // Remove task with maximum duration
//            int maxDur = -1, maxIdx = -1;
//            for (int j = 0; j < selectedDurations.size(); j++) {
//                if (selectedDurations[j] > maxDur) {
//                    maxDur = selectedDurations[j];
//                    maxIdx = j;
//                }
//            }
//
//            totalTime -= selectedDurations[maxIdx];
//            selectedDurations.erase(selectedDurations.begin() + maxIdx);
//            selectedIndices.erase(selectedIndices.begin() + maxIdx);
//        }
//    }
//
//    // Output
//    cout << "\nMaximum number of tasks: " << selectedIndices.size() << endl;
//    cout << "Selected task numbers: ";
//    for (int id : selectedIndices) {
//        cout << id << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


///q3) moore voting algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find majority element candidate
int findMajorityCandidate(vector<int>& arr) {
    int count = 0, candidate = 0;

    for (int num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else {
            if (num == candidate)
                count++;
            else
                count--;
        }
    }
    return candidate;
}

// Function to check if candidate is majority
bool isMajority(vector<int>& arr, int candidate) {
    int count = 0;
    for (int num : arr) {
        if (num == candidate)
            count++;
    }
    return count > arr.size() / 2;
}

// Function to find median
double findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if (n % 2 == 1)
        return arr[n / 2];
    else
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Moore's Voting Algorithm
    int candidate = findMajorityCandidate(arr);
    if (isMajority(arr, candidate))
        cout << "Majority element: " << candidate << endl;
    else
        cout << "No majority element." << endl;

    // Find Median
    double median = findMedian(arr);
    cout << "Median: " << median << endl;

    return 0;
}




