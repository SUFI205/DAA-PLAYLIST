//#include <iostream>
//using namespace std;
//
//int linearSearch(int arr[], int size, int target, int &comparisons)
//{
//    comparisons = 0;
//
//    for (int i = 0; i < size; i++)
//    {
//        comparisons++;
//        if (arr[i] == target)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int main() {
//    int size, target, comparisons;
//
//    cout << "Enter the number of elements: ";
//    cin >> size;
//
//    int arr[size];
//
//    cout << "Enter " << size << " elements: ";
//    for (int i = 0; i < size; i++)
//    {
//        cin >> arr[i];
//    }
//
//    cout << "Enter the number to search: ";
//    cin >> target;
//
//    int result = linearSearch(arr, size, target, comparisons);
//
//    if (result != -1)
//        cout << "Element found at index: " << result << endl;
//    else
//        cout << "Element not found in the array." << endl;
//
//    cout << "Total comparisons made: " << comparisons << endl;
//
//    return 0;
//}






//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, target, comparisons = 0;
//
//    cout << "ENTER THE NUMBER OF ARRAY ELEMENTS:-> ";
//    cin >> n;
//
//    int arr[n];
//
//    cout << "ENTER THE ARRAY (SORTED):-> ";
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    cout << "ENTER THE ELEMENT TO SEARCH:-> ";
//    cin >> target;
//
//    int low = 0, high = n - 1, mid;
//
//    while (low <= high)
//    {
//        comparisons++;
//        mid = low + (high - low) / 2;
//
//        if (arr[mid] == target)
//        {
//            cout << "ELEMENT FOUND AT INDEX: " << mid << endl;
//            cout << "TOTAL COMPARISONS MADE: " << comparisons << endl;
//            return 0;
//        }
//
//        if (arr[mid] < target)
//        {
//            low = mid + 1;
//        } else
//        {
//            high = mid - 1;
//        }
//    }
//
//    cout << "ELEMENT NOT FOUND" << endl;
//    cout << "TOTAL COMPARISONS MADE: " << comparisons << endl;
//
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int target) {
    if (arr[0] == target)
        return 0;

    int index = 1;
    while (index < n && arr[index] <= target)
        index *= 2;

    return binarySearch(arr, index / 2, min(index, n - 1), target);
}

int main() {
    int n, target;
    cout << "ENTER THE SIZE OF ARRAY:-> ";
    cin >> n;

    int arr[n];

    cout << "ENTER THE ARRAY ELEMENTS (SORTED):-> ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ENTER THE ELEMENT TO SEARCH:-> ";
    cin >> target;

    int result = exponentialSearch(arr, n, target);

    if (result != -1)
        cout << "ELEMENT FOUND AT INDEX " << result << endl;
    else
        cout << "ELEMENT NOT FOUND" << endl;

    return 0;
}

























