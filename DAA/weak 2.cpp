//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int first = findFirst(nums, target);
//        int second = findLast(nums, target);
//        return {first,};
//    }
//
//private:
//    int findFirst(vector<int>& nums, int target) {
//        int low = 0, high = nums.size() - 1, first = -1;
//        while (low <= high) {
//            int mid = low + (high - low) / 2;
//            if (nums[mid] == target) {
//                first = mid;
//                high = mid - 1;
//            } else if (nums[mid] < target) {
//                low = mid + 1;
//            } else {
//                high = mid - 1;
//            }
//        }
//        return first;
//    }
//
//    int findLast(vector<int>& nums, int target) {
//        int low = 0, high = nums.size() - 1, last = -1;
//        while (low <= high) {
//            int mid = low + (high - low) / 2;
//            if (nums[mid] == target) {
//                last = mid;
//                low = mid + 1;
//            } else if (nums[mid] < target) {
//                low = mid + 1;
//            } else {
//                high = mid - 1;
//            }
//        }
//        return last;
//    }
//};
//
//int main() {
//    int n, target;
//    cout << "ENTER THE ARRAY SIZE: ";
//    cin >> n;
//
//    vector<int> arr(n);
//    cout << "ENTER THE ARRAY ELEMENTS: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "ENTER THE ELEMENT TO SEARCH: ";
//    cin >> target;
//
//    Solution sol;
//    vector<int> result = sol.searchRange(arr, target);
//
//    cout << "First Occurrence: " << result[0] << "\n";
//    cout << "Last Occurrence: " << result[1] << "\n";
//
//    return 0;
//}
///write the code for selection sort

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "ENTER THE SIZE OF ARRAY: ";
//    cin >> n;
//
//    vector<int> arr(n);
//
//    cout << "ENTER THE ARRAY ELEMENTS: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    // Sorting in descending order using Selection Sort
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (arr[i] < arr[j]) {
//                swap(arr[i], arr[j]);
//            }
//        }
//    }
//
//    // Printing sorted array
//    cout << "SORTED ARRAY IN DESCENDING ORDER: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void findTriplet(vector<int>& arr, int n) {
//    bool found = false;
//
//    for (int k = 2; k < n; k++) {
//        int i = 0, j = k - 1;
//
//        while (i < j) {
//            int sum = arr[i] + arr[j];
//
//            if (sum == arr[k]) {
//                cout << "Indices: i = " << i << ", j = " << j << ", k = " << k << endl;
//                cout << "Values: " << arr[i] << " + " << arr[j] << " = " << arr[k] << endl;
//                found = true;
//                // return;  // Uncomment if you want only the first triplet
//            }
//            else if (sum < arr[k]) {
//                i++;
//            }
//            else {
//                j--;
//            }
//        }
//    }
//
//    if (!found) {
//        cout << "No such triplet found." << endl;
//    }
//}
//
//int main() {
//    int n;
//    cout << "ENTER THE NUMBER OF ELEMENTS: ";
//    cin >> n;
//
//    vector<int> arr(n);
//    cout << "ENTER THE ELEMENTS OF ARRAY: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    findTriplet(arr, n);
//
//    return 0;
//}


#include<iostream>
using namespace std;

int main()
{
    int n,key,c=0;
    cout<<"enter the array size";
    cin>>n;

    int arr[n];
    cout<<"enter the array element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the key element";
    cin>>key;

    for(int i=0;i<n;i++)
    {                                           ///unordered map is also one solution of big o of n
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}

///bubble sort
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout<<"enter the array size";
//    cin>>n;
//
//    int arr[n];
//    cout<<"enter the array element";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n-i-1;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                swap(arr[j],arr[j+1]);
//            }
//        }
//    }
//    cout<<"sorted array";
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<endl;
//    }
//}






























