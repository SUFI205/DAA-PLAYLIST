//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n;
//    cout<<"enter the size of array";
//    cin>>n;
//
//    int arr[n];
//
//    cout<<"enter the size";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
   }
///bubble sort
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n-i-1;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//              swap(arr[j],arr[j+1]);
//            }
//        }
//    }
///selection sort
//    for(int i=0;i<n;i++)
//    {
//        int min_index=i;
//        for(int j=i+1;j<n;j++)
//        {
//            if(arr[j]<arr[min_index])
//            {
//                min_index=j;
//            }
//            if(min_index!=i)
//            {
//                swap(arr[min_index],arr[i]);
//            }
//        }
//    }
///insertion sort
//    for(int i=0;i<n;i++)
//    {
//        int temp=arr[i];
//        int j=i-1;
//        while(j>=0 && arr[j]>temp)
//        {
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=temp;
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<endl;
//    }
//}
//#include<iostream>
//using namespace std;
//
//void merge(int arr[], int left, int mid, int right) {
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//
//    int L[n1], R[n2];
//
//    for (int i = 0; i < n1; i++) {
//        L[i] = arr[left + i];
//    }
//    for (int j = 0; j < n2; j++) {
//        R[j] = arr[mid + 1 + j];
//    }
//
//    int i = 0, j = 0, k = left;
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) {
//            arr[k++] = L[i++];
//        } else {
//            arr[k++] = R[j++];
//        }
//    }
//    while (i < n1) {
//        arr[k++] = L[i++];
//    }
//    while (j < n2) {
//        arr[k++] = R[j++];
//    }
//}
//
//void mergeSort(int arr[], int left, int right) {
//    if (left < right) {
//        int mid = left + (right - left) / 2;
//        mergeSort(arr, left, mid);
//        mergeSort(arr, mid + 1, right);
//        merge(arr, left, mid, right);
//    }
//}
//
//void printArray(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter the elements of the array: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    printArray(arr, n);
//
//    mergeSort(arr, 0, n - 1);
//
//    cout << "Sorted array: ";
//    printArray(arr, n);
//
//    return 0;
//}
//
//void merge(int arr[],int left,int mid,int right)
//{
//    int n1=mid-left+1;
//    int n2=right-mid;
//
//    int L[n1],int R[n2];
//
//    for(int i=0;i<n1;i++)
//    {
//        L[i]=arr[left+i];
//    }
//    for(int j=0;j<n2;j++)
//    {
//        R[i]=arr[mid+1+j];
//    }
//
//    int i=0,j=0,k=left;
//
//    while(i<n1 && j<n2)
//    {
//        if(L[i]<=R[j])
//        {
//            arr[k++]=L[i++];
//        }
//        else
//        {
//            arr[k++]=R[j++];
//        }
//    }
//    while(i<n1)
//    {
//        arr[k++]=L[i++];
//    }
//    while(j<n2)
//    {
//        arr[k++]=R[j++];
//    }
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//   int n
//   cout<<"enter the number";
//   cin>>n;
//
//   cout<<"enter the array";
//   for(int i=0;i<n;i++)
//   {
//       cin>>arr[i];
//   }

//   for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<n-i-1;j++)
//       {
//           if(arr[j]>arr[j+1])
//           {
//               swap(arr[j],arr[j+1]);
//           }
//       }
//   }

//    for(int i=0;i<n;i++)
//    {
//        int minindex=i;
//        for(int j=i+1;j<n;j++)
//        {
//            if(arr[j]<arr[minindex])
//            {
//                minindex=j;
//            }
//            if(minindex!=i)
//            {
//                swap(arr[i],arr[minindex]);
//            }
//        }
//    }
//void merge(int arr[],int left,int mid,int right)
//{
//    int n1=mid-left+1;
//    int n2=right-mid;
//
//    int l[n1],R[n2];
//
//    for(int i=0;i<n1;i++)
//    {
//        L[i++]=arr[left+i];
//    }
//    for(int j=0;j<n2;j++)
//    {
//        R[i++]=arr[mid+1+j];
//    }
//
//    int i=0,j=0,k=left;
//
//    while(i<n1 && j<n2)
//    {
//        if(L[i]<=R[j])
//        {
//            arr[k++]=L[i++];
//        }
//        else
//        {
//            arr[k++]=R[j++];
//        }
//    }
//    while(i<n1)
//    {
//        arr[k++]=L[i++];
//    }
//    while(j<n2)
//    {
//        arr[k++]=R[j++];
//    }
//
//}
///insertion sort
//    for(int i=0;i<n;i++)
//    {
//        int temp=arr[i];
//        int j=i-1;
//        while(j>=0 && arr[j]>temp)
//        {
//            arr[j+1]=arr[j];
//            j--;
//        }
//        arr[j+1]=temp;
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<endl;
//    }
//}

//for(int i=0;i<n;i++)
//{
//    int temp=arr[i];
//    int j=i+1;
//    while(j>=0 &&arr[j]>temp)
//    {
//        arr[j+1]=arr[j];
//        j--;
//    }
//    arr[j+1]=temp;
//}
//

//for(int i=0;i<n;i++)
//{
//    int temp=arr[i];
//    int j=i+1;
//
//    while(j>=0 && arr[j]>temp)
//    {
//        arr[j+1]=arr[j];
//        j--;
//    }
//    arr[j+1]=temp;
//}

//for(int i=0;i<n;i++)
//{
//    int temp=arr[i];
//    int j=i+1;
//
//    while(j>=0 && arr[j]>temp)
//    {
//        arr[j+1]=temp;
//        j--;
//    }
//    arr[j+1]=temp;
//}

///quick sort
//#include <iostream>
//using namespace std;
//
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];
//    int i = low - 1;
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(arr[i], arr[j]);
//        }
//    }
//    swap(arr[i + 1], arr[high]);
//    return i + 1;
//}
//
//void quicksort(int arr[], int low, int high) {
//    if (low < high) {
//        int pi = partition(arr, low, high);
//
//        quicksort(arr, low, pi - 1);
//        quicksort(arr, pi + 1, high);
//    }
//}
//
//void print(int arr[], int n) {
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    quicksort(arr, 0, n - 1);
//    print(arr, n);
//
//    return 0;
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//void swap(int &a,int &b)
//{
//    int temp=a;
//    a=b;
//    b=temp;
//}
//
//int randomizedpartition(int arr[],int low,int high)
//{
//    int randomindex=low+rand()%(high-low+1);
//    swap(arr[randomindex],arr[high]);
//
//    int pivot=arr[high];
//    int i=low-1;
//    for(int j=low;j<high;j++)
//    {
//        if(arr[j]<pivot)
//        {
//            i++;
//            swap(arr[i],arr[j]);
//        }
//    }
//    swap(arr[i+1],arr[high]);
//    return i+1;
//}
//
//void randomnizedquicksort(int arr[],int low,int high)
//{
//    if(low<high)
//    {
//        int pi=randomizedpartition(arr,low,high);
//        randomnizedquicksort(arr,low,pi-1);
//        randomnizedquicksort(arr,pi+1,high);
//    }
//}
//
//void printarray(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//
//int main()
//{
//    int n;
//    cout<<"enter the number";
//    cin>>n;
//
//    int arr[n];
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    printarray(arr,n);
//
//    randomnizedquicksort(arr,0,n-1);
//
//    printarray(arr,n);
//
//}

////#include <iostream>
////#include <vector>;
////
////using namespace std;
////
////class Heap {
////private:
////    vector<int> heap; // Min-Heap by default
////
////    void heapifyDown(int i) {
////        int left = 2 * i + 1;
////        int right = 2 * i + 2;
////        int smallest = i;
////
////        if (left < heap.size() && heap[left] < heap[smallest])
////            smallest = left;
////        if (right < heap.size() && heap[right] < heap[smallest])
////            smallest = right;
////
////        if (smallest != i) {
////            swap(heap[i], heap[smallest]);
////            heapifyDown(smallest);
////        }
////    }
////
////    void heapifyUp(int i) {
////        int parent = (i - 1) / 2;
////        while (i > 0 && heap[i] < heap[parent]) {
////            swap(heap[i], heap[parent]);
////            i = parent;
////            parent = (i - 1) / 2;
////        }
////    }
////
////public:
////    Heap() {}
////
////    void buildHeap(vector<int>& arr) {
////        heap = arr;
////        for (int i = heap.size() / 2 - 1; i >= 0; i--) {
////            heapifyDown(i);
////        }
////    }
////
////    int top() {
////        if (heap.empty()) {
////            cout << "Heap is empty!\n";
////            return -1;
////        }
////        return heap[0];
////    }
////
////    void pop() {
////        if (heap.empty()) {
////            cout << "Heap is empty!\n";
////            return;
////        }
////        heap[0] = heap.back();
////        heap.pop_back();
////        heapifyDown(0);
////    }
////
////    void push(int val) {
////        heap.push_back(val);
////        heapifyUp(heap.size() - 1);
////    }
////
////    bool isEmpty() {
////        return heap.empty();
////    }
////
////    void printHeap() {
////        for (int val : heap)
////            cout << val << " ";
////        cout << endl;
////    }
////};
////
////int main() {
////    Heap h;
////    int choice, n, val;
////
////    cout << "Enter number of elements to build heap: ";
////    cin >> n;
////    vector<int> arr(n);
////
////    cout << "Enter elements: ";
////    for (int i = 0; i < n; i++)
////        cin >> arr[i];
////
////    h.buildHeap(arr);
////    cout << "Heap created: ";
////    h.printHeap();
////
////    while (true) {
////        cout << "\nMenu:\n";
////        cout << "1. Insert element\n";
////        cout << "2. Remove top element\n";
////        cout << "3. Get top element\n";
////        cout << "4. Print heap\n";
////        cout << "5. Exit\n";
////        cout << "Enter choice: ";
////        cin >> choice;
////
////        switch (choice) {
////            case 1:
////                cout << "Enter value to insert: ";
////                cin >> val;
////                h.push(val);
////                cout << "Heap after insertion: ";
////                h.printHeap();
////                break;
////            case 2:
////                h.pop();
////                cout << "Heap after removal: ";
////                h.printHeap();
////                break;
////            case 3:
////                cout << "Top element: " << h.top() << endl;
////                break;
////            case 4:
////                cout << "Current heap: ";
////                h.printHeap();
////                break;
////            case 5:
////                cout << "Exiting...\n";
////                return 0;
////            default:
////                cout << "Invalid choice! Try again.\n";
////        }
////    }
////
////    return 0;
////}

///count sort
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void countingSort(vector<int>& arr) {
//    if (arr.empty()) return;
//
//    int maxElement = *max_element(arr.begin(), arr.end());
//    int minElement = *min_element(arr.begin(), arr.end());
//    int range = maxElement - minElement + 1;
//
//    vector<int> count(range, 0);
//    vector<int> output(arr.size());
//
//    // Count the occurrences of each element
//    for (int num : arr) {
//        count[num - minElement]++;
//    }
//
//    // Modify count array to store the cumulative sum
//    for (int i = 1; i < range; i++) {
//        count[i] += count[i - 1];
//    }
//
//    // Build the output array
//    for (int i = arr.size() - 1; i >= 0; i--) {
//        output[count[arr[i] - minElement] - 1] = arr[i];
//        count[arr[i] - minElement]--;
//    }
//
//    // Copy the sorted elements back to the original array
//    for (int i = 0; i < arr.size(); i++) {
//        arr[i] = output[i];
//    }
//}
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    if (n <= 0) {
//        cout << "Invalid array size!" << endl;
//        return 1;
//    }
//
//    vector<int> arr(n);
//    cout << "Enter " << n << " elements: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    cout << "Original array: ";
//    for (int num : arr) cout << num << " ";
//    cout << endl;
//
//    countingSort(arr);
//
//    cout << "Sorted array: ";
//    for (int num : arr) cout << num << " ";
//    cout << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//int firstoccurence(vector<int> &arr,int target)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    int result=-1;
//
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//
//        if(arr[mid]==target)
//        {
//            result=mid;
//            right=mid-1;
//        }
//        else if(arr[mid]<target)
//        {
//            left=mid+1;
//        }
//        else
//            {
//                right=mid-1;
//            }
//    }
//    return result;
//}
//
//int lastoccurence(vector<int> &arr,int target)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    int result=-1;
//
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//
//        if(arr[mid]==target)
//        {
//            result=mid;
//            left=mid+1;
//        }
//        else if(arr[mid]<target)
//        {
//            left=mid+1;
//        }
//        else
//        {
//                right=mid-1;
//        }
//    }
//    return result;
//}
//
//int coutoccurence(vector<int> &arr,int target)
//{
//    int first=firstoccurence(arr,target);
//    if(first==-1)
//        return 0;
//    int last=lastoccurence(arr,target);
//    return (last-first+1);
//}
//
//int main()
//{
//    int n,target;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int> arr(n);
//
//    cout<<"enter the element";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    cout<<"enter the target";
//    cin>>target;
//
//    int count= coutoccurence(arr,target);
//
//    cout<<"the element"<<target<<"occurs"<<count<<"times"<<endl;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int searchsortedarray(vector<int> &arr,int target)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//        if(arr[mid]==target)
//        {
//            return mid;
//        }
//        if(arr[left]<=arr[mid] && target<arr[mid])
//        {
//            if(arr[left]<=target && target<arr[mid])
//            {
//                right=mid-1;
//            }
//            else
//            {
//                right=mid-1;
//            }
//        }
//        else
//        {
//            if(arr[mid]<target && target<=arr[right])
//            {
//                left=mid+1;
//            }
//            else
//            {
//                right=mid-1;
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int n,target;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the element";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    cout<<"enter the target";
//    cin>>target;
//
//    int index=searchsortedarray(arr,target);
//
//    if(index!=-1)
//    {
//        cout<<"element found at index"<<index<<endl;
//    }
//    else
//    {
//        cout<<"element not found in the array"<<endl;
//    }
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//void findminmax(vector<int> &arr)
//{
//    if(arr.empty())
//    {
//        cout<<"the array is empty"<<endl;
//        return;
//    }
//    int smallest=arr[0];
//    int largest=arr[arr.size()-1];
//
//    cout<<"smallest element: "<<smallest<<endl;
//    cout<<"largest element: "<<largest<<endl;
//}
//
//
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int> arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    findminmax(arr);
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int binarysearchmod(vector<int> &arr,int target)
//{
//    int left=0;
//    int right=arr.size()-1;
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//
//        if(arr[mid]==target)
//        {
//            return mid;
//        }
//        if(mid>left && arr[mid-1]==target)
//        {
//            return mid-1;
//        }
//        if(mid<right && arr[mid+1]==target)
//        {
//            return mid+1;
//        }
//
//        if(arr[mid]>target)
//        {
//            right=mid-2;
//        }
//        else
//        {
//            left=mid+2;
//        }
//    }
//    return -1;
//
//}
//int main()
//{
//    int n,target;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the size";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    cout<<"enter the target";
//    cin>>target;
//
//    int index=binarysearchmod(arr,target);
//
//    if(index!=-1)
//    {
//        cout<<"element found at index"<<index<<endl;
//    }
//    else
//    {
//        cout<<"element not found in the array"<<endl;
//    }
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int peakelement(vector<int> &arr) {
//    int left = 0, right = arr.size() - 1;
//
//    while (left < right) { // Use left < right instead of left <= right
//        int mid = left + (right - left) / 2;
//
//        // Ensure mid+1 is within bounds before accessing it
//        if (arr[mid] > arr[mid + 1]) {
//            right = mid; // Peak is on the left side (including mid)
//        } else {
//            left = mid + 1; // Peak is on the right side
//        }
//    }
//    return left; // left will eventually point to a peak
//}
//
//int main() {
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//
//    vector<int> arr(n);
//    cout << "Enter the elements of the array: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//
//    int peakIndex = peakelement(arr);
//    cout << "Peak element found at index " << peakIndex << " with value " << arr[peakIndex] << endl;
//
//    return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int findmininrotatedarray(vector<int>&arr)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    while(left<right)
//    {
//        int mid=left+(right-left)/2;
//        if(arr[mid]>arr[right])
//        {
//            left=mid+1;
//        }
//        else
//        {
//            right=mid;
//        }
//    }
//    return arr[left];
//}
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    int minelemnet=findmininrotatedarray(arr);
//    cout<<"the minelemnet is "<<minelemnet<<endl;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int findsmallestmissing(vector<int>&arr)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//
//        if(arr[mid]==mid+1)
//        {
//            left=mid+1;
//        }
//        else
//        {
//            right=mid-1;
//        }
//
//    }
//    return left+1;
//}
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    int minelemnet=findsmallestmissing(arr);
//    cout<<"minelement"<<minelemnet<<endl;
//}



//#include<iostream>
//#include<vector>
//
//using namespace std;
//void findthelement(vector<int>&arr,int k)
//{
//    int n=arr.size();
//    if(k<1 || k>n)
//    {
//        cout<<"invalid value pof k!"<<endl;
//    }
//
//    int kthsmallest=arr[k-1];
//    int kthlargest=arr[n-k];
//
//    cout << "The " << k << "-th smallest element is: " << kthsmallest << endl;
//    cout << "The " << k << "-th largest element is: " << kthlargest << endl;
//
//}
//
//int main()
//{
//    int n,k;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    cout<<"enter the value of k";
//    cin>>k;
//
//    findthelement(arr,k);
//}
//
//
//


//#include<iostream>
//#include<vector>
//using namespace std;
//int finduniqueelement(vector<int> &arr)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    while(left<right)
//    {
//        int mid=left+(right-left)/2;
//
//        if(mid%2==1)
//        {
//            mid--;
//        }
//
//        if(arr[mid]==arr[mid+1])
//        {
//            left=mid+2;
//        }
//        else
//        {
//            right=mid;
//        }
//    }
//    return arr[left];
//}
//
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the element";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    int uniqueelement=finduniqueelement(arr);
//    cout<<"the unique element is"<<uniqueelement<<endl;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//int findkthmissing(vector<int>&arr,int k)
//{
//    int left=0;
//    int right=arr.size()-1;
//
//    while(left<=right)
//    {
//        int mid=left+(right-left)/2;
//        int missingcount=arr[mid]-(mid+1);
//
//        if(missingcount<k)
//        {
//            left=mid+1;
//        }
//        else
//        {
//            right=mid-1;
//        }
//    }
//    return left+k;
//}
//
//int main()
//{
//    int n,k;
//    cout<<"enter the number";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    int result=findkthmissing(arr,k);
//    cout<<"the missing no "<<result<<endl;
//
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int partition(vector<int>&arr,int low,int high)
//{
//    int pivot=arr[high];
//    int i=low-1;
//
//    for(int j=low;j<high;j++)
//    {
//        if(arr[j]<high)
//        {
//            i++;
//            swap(arr[i],arr[j]);
//        }
//    }
//    swap(arr[i+1],arr[high]);
//    return i+1;
//}
//
//void quicksort(vector<int>&arr,int low,int high)
//{
//    if(low<high)
//    {
//        int pi=partition(arr,low,high);
//        quicksort(arr,low,pi-1);
//        quicksort(arr,pi+1,high)
//
//    }
//}
//
//int main()
//{
//    int n;
//    cout<<"enter the size";
//    cin>>n;
//
//    vector<int>arr(n);
//
//    cout<<"enter the elements";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    quicksort(arr,0,n-1);
//
//    cout<<"soted array";
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//
//}


#include<iostream>
#include<vector>
using namespace std;

int randominized_partition(vector<int>&arr,int low,int high)
{
    int randomnided=low+rand()%(high-low+1);
    swap(arr[randomindex],arr[high]);

    int pivot=arr[high];
    int i=low-1;

    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void randomnizedquicksort(vector<int>&arr,int low,int high)
{
    if(low<high)
    {
        int pi=randominized_partition(arr,low,high);
        randomnizedquicksort(arr,low,pi-1);
        randomnizedquicksort(arr,pi+1,high);
    }
}

int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<;i++)
    {
        cin>>arr[i];
    }

    randomnizedquicksort(arr,0,n-1);

    cout<<"sorted array...";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
