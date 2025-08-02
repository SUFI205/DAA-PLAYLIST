//#include <iostream>
//using namespace std;
//
//void countSort(int arr[], int n) {
//    int maxElement = arr[0];
//    int minElement = arr[0];
//
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > maxElement) {
//            maxElement = arr[i];
//        }
//        if (arr[i] < minElement) {
//            minElement = arr[i];
//        }
//    }
//
//    int range = maxElement - minElement + 1;
//    int *count = new int[range]();
//    int *output = new int[n];
//
//    for (int i = 0; i < n; i++) {
//        count[arr[i] - minElement]++;
//    }
//
//    for (int i = 1; i < range; i++) {
//        count[i] += count[i - 1];
//    }
//
//    for (int i = n - 1; i >= 0; i--) {
//        output[count[arr[i] - minElement] - 1] = arr[i];
//        count[arr[i] - minElement]--;
//    }
//
//    for (int i = 0; i < n; i++) {
//        arr[i] = output[i];
//    }
//
//    delete[] count;
//    delete[] output;
//}
//
//int main() {
//    int n;
//    cout << "Enter the size: ";
//    cin >> n;
//
//    int *arr = new int[n];
//
//    cout << "Enter the array elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    countSort(arr, n);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    delete[] arr;
//    return 0;
//}


///q1)
//#include <iostream>
//using namespace std;
//
//void countSort(char arr[], int n, char &maxChar) {
//    int count[26] = {0};
//    char output[n];
//
//    for (int i = 0; i < n; i++) {
//        count[arr[i] - 'a']++;
//    }
//
//    int maxCount = 0;
//    for (int i = 0; i < 26; i++) {
//        if (count[i] > maxCount) {
//            maxCount = count[i];
//            maxChar = 'a' + i;
//        }
//    }
//
//    for (int i = 1; i < 26; i++) {
//        count[i] += count[i - 1];
//    }
//
//    for (int i = n - 1; i >= 0; i--) {
//        output[count[arr[i] - 'a'] - 1] = arr[i];
//        count[arr[i] - 'a']--;
//    }
//
//    for (int i = 0; i < n; i++) {
//        arr[i] = output[i];
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the size: ";
//    cin >> n;
//
//    char *arr = new char[n];
//    cout << "Enter the array elements (alphabets only): ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    char maxChar;
//    countSort(arr, n, maxChar);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Most frequent character: " << maxChar << endl;
//
//    delete[] arr;
//    return 0;
//}
///q2)
//#include<iostream>
//using namespace std;
//
//void quicksort(int arr[],int low,int high)
//{
//    int pivot=arr[high];
//    int i=low-1;
//    for(int j=low;j<high;j++)
//    {
//        if(arr[j]<pivot)
//        {
//        i++;
//        swap(arr[i],arr[j]);
//        }
//    }
//    swap(arr[i+1],arr[high]);
//    return i+1;
//}
//
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    int arr[n];
//
//    cout<<"enter the number";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//
//}
///q3)
#include <iostream>
#include <vector>

using namespace std;

vector<int> commonElement(int arr[], int arr1[], int n, int m) {
    int i = 0, j = 0;
    vector<int> commonelements;

    while (i < n && j < m) {
        if (arr[i] == arr1[j]) {
            commonelements.push_back(arr[i]);
            i++;
            j++;
        } else if (arr[i] < arr1[j]) {
            i++;
        } else {
            j++;
        }
    }
    return commonelements;
}

int main() {
    int n, m;

    cout << "Enter the size of the first array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the first array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> m;
    int arr1[m];
    cout << "Enter elements of the second array (sorted): ";
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    vector<int> result = commonElement(arr, arr1, n, m);

    cout << "Common elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//
//bool hasPairWithSum(int arr[], int n, int key) {
//
//    sort(arr, arr + n);
//
//
//    int left = 0, right = n - 1;
//
//    while (left < right) {
//        int sum = arr[left] + arr[right];
//
//        if (sum == key) {
//            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")" << endl;
//            return true;
//        } else if (sum < key) {
//            left++;
//        } else {
//            right--;
//        }
//    }
//
//    return false;
//}
//
//int main() {
//    int n, key;
//
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    cout << "Enter the key sum: ";
//    cin >> key;
//
//    if (!hasPairWithSum(arr, n, key)) {
//        cout << "No pair found" << endl;
//    }
//
//    return 0;
//}
//
