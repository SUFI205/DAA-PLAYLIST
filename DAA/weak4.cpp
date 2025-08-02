//#include<iostream>
//using namespace std;
//
//void merge(int arr[], int left, int mid, int right,int &comparison,int &inversion)
//{
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//
//    int L[n1], R[n2];
//
//    for (int i = 0; i < n1; i++)
//        L[i] = arr[left + i];
//    for (int i = 0; i < n2; i++)
//        R[i] = arr[mid + 1 + i];
//
//    int i = 0, j = 0, k = left;
//    while (i < n1 && j < n2)
//    {
//        comparison++;
//        if (L[i] <= R[j])
//        {
//            arr[k] = L[i];
//            i++;
//        }
//        else
//        {
//            arr[k] = R[j];
//            j++;
//            inversion+=mid-i+1;
//        }
//        k++;
//    }
//
//    while (i < n1) {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//
//    while (j < n2) {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[], int left, int right,int &comparison,int &inversion)
//{
//    if (left < right) {
//        int mid = left + (right - left) / 2;
//
//        mergeSort(arr, left, mid,comparison,inversion);
//        mergeSort(arr, mid + 1, right,comparison,inversion);
//        merge(arr, left, mid, right,comparison,inversion);
//    }
//}
//
//
//void printArray(int arr[], int size,int comparison,int inversion)
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] <<endl;
//    }
//    cout<<"total number of comparison"<<comparison<<endl;
//    cout<<"total number of inversion"<<inversion<<endl;
//}
//
//int main()
//{
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < n; i++)
//        cin >> arr[i];
//    int comparison=0;
//    int inversion=0;
//    mergeSort(arr, 0, n - 1,comparison,inversion);
//
//    cout << "Sorted array: ";
//    printArray(arr, n,comparison,inversion);
//
//    return 0;
//}



//#include<iostream>
//#include<cstdlib>
//using namespace std;
//int swapcount=0;
//int comparisson=0;
//
//void swap(int &a,int &b)
//{
//    int temp=a;
//    a=b;
//    b=temp;
//    swapcount++;
//}
//
//int randomnizedpartition(int arr[],int low,int high)
//{
//    int randomindex=low+rand()%(high-low+1);
//    swap(arr[randomindex],arr[high]);
//
//    int pivot=arr[high];
//    int i=low-1;
//    for(int j=low;j<high;j++)
//    {
//        comparisson++;
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
//        int pi=randomnizedpartition(arr,low,high);
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
//    cout<<" "<<endl;
//}
//
//int main()
//{
//    int n;
//    cout<<"enter the size";
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
//    cout << "Total comparisons: " << comparisson << endl;
//    cout << "Total swaps: " << swapcount << endl;
//}

//
#include<iostream>
#include<queue>
using namespace std;

int kthsmallest(int arr[],int k,int n)
{
    priority_queue<int> maxHeap;

    for(int i=0;i<k;i++)
    {
        maxHeap.push(arr[i]);
    }

    for(int i=k;i<n;i++)
    {
        if(arr[i]<maxHeap.top())
        {
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    return maxHeap.top();
}

int kthlargest(int arr[],int k,int n)
{
    priority_queue<int> minHeap;

    for(int i=0;i<k;i++)
    {
        minHeap.push(arr[i]);
    }

    for(int i=k;i<n;i++)
    {
        if(arr[i]>minHeap.top())
        {
            minHeap.pop();
            minHeap.push(arr[i]);
        }
    }
    return minHeap.top();
}

int main()
{
    int n,k;
    cout<<"enter the size";
    cin>>n;

    int arr[n];

    cout<<"enter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the k";
    cin>>k;

    cout << "Kth Smallest Element: " <<kthsmallest(arr,k,n)<< endl;
    cout << "Kth Largest Element: " <<kthlargest(arr,k,n)<< endl;


}


