////////////int partition(vector<int> &arr,int low,int high)
////////////{
////////////    int pivot=arr[high];
////////////    int i=low-1;
////////////
////////////    for(int j=low;j<high;j++)
////////////    {
////////////        if(arr[j]<pivot)
////////////        {
////////////            i++;
////////////            swap(arr[i],arr[j]);
////////////        }
////////////    }
////////////    swap(arr[i+1],arr[high]);
////////////    return i+1;
////////////}
////////////
////////////void quicksort(vector<int> &arr,int low,int high)
////////////{
////////////    if(low<high)
////////////    {
////////////        int pi=partition(arr,low,high);
////////////        quicksort(arr,low,pi-1);
////////////        quicksort(arr,pi+1,high);
////////////    }
////////////}
//////////
////////////int partition(vector<int> &arr,int low,int high)
////////////{
////////////    int pivot=arr[high];
////////////    int i=low-1;
////////////
////////////    for(int j=low;j<high;j++)
////////////    {
////////////        if(arr[j]<pivot)
////////////        {
////////////            i++;
////////////            swap(arr[i],arr[j]);
////////////        }
////////////    }
////////////    swap(arr[i+1],arr[high]);
////////////    return i+1;
////////////}
//////////
////////////int partition(vector<int> &arr,int low,int high)
////////////{
////////////    int pivot=arr[high];
////////////    int i=low-1;
////////////
////////////    for(int j=low;j<high;j++)
////////////    {
////////////        if(arr[j]<pivot)
////////////        {
////////////            i++;
////////////            swap(arr[i],arr[j]);
////////////        }
////////////    }
////////////    swap(arr[i+1],arr[high]);
////////////    return i+1;
////////////}
//////////
//////////int randomnized_partition(vector<int> &arr,int low,int high)
//////////{
//////////    int randomindex=low+rand()%(high-low+1);
//////////    swap(arr[randomindex],arr[high]);
//////////
//////////    int pivot=arr[high];
//////////    int i=low-1;
//////////
//////////    for(int j=low;j<high;j++)
//////////    {
//////////        if(arr[j]<pivot)
//////////        {
//////////            i++;
//////////            swap(arr[i],arr[j]);
//////////        }
//////////    }
//////////    swap(arr[i+1],arr[high]);
//////////    return i+1;
//////////}
////////
//////////#include <iostream>
//////////#include <vector>
//////////
//////////using namespace std;
//////////
//////////int countones(vector<int> &arr, int n) {
//////////    int low = 0, high = n - 1;
//////////
//////////    while (low <= high) {
//////////        int mid = low + (high - low) / 2;
//////////
//////////        if (arr[mid] == 0) {
//////////            high = mid - 1;
//////////        } else if (mid == n - 1 || arr[mid + 1] != 1) {
//////////            return mid + 1;
//////////        } else {
//////////            low = mid + 1;
//////////        }
//////////    }
//////////    return 0;
//////////}
//////////
//////////int main() {
//////////    int n;
//////////    cout << "Enter the size: ";
//////////    cin >> n;
//////////
//////////    vector<int> arr(n);
//////////    cout << "Enter the elements (sorted binary array): ";
//////////    for (int i = 0; i < n; i++) {
//////////        cin >> arr[i];
//////////    }
//////////
//////////    int onesCount = countones(arr, n);
//////////    cout << "Number of ones: " << onesCount << endl;
//////////
//////////    return 0;
//////////}
////////
////////
////////
//////////#include<iostream>
//////////#include<vector>
//////////using namespace std;
//////////
//////////int findpartitionelement(vector<int> &arr)
//////////{
//////////    int n=arr.size();
//////////    if(n<3)
//////////    {
//////////        return -1;
//////////    }
//////////    vector<int> leftmax(n,INT_MIN);
//////////    vector<int> rightmin(n,INT_MAX);
//////////
//////////    leftmax[0]=INT_MIN;
//////////    for(int i=1;i<n;i++)
//////////    {
//////////        leftmax[i]=max(leftmax[i-1],arr[i-1]);
//////////    }
//////////
//////////    rightmin[n-1]=INT_MAX;
//////////    for(int i=n-2;i>=0;i--)
//////////    {
//////////        rightmin[i]=min(rightmin[i+1],arr[i+1]);
//////////    }
//////////
//////////    for(int i=1;i<n-1;i++)
//////////    {
//////////        if(leftmax[i]<arr[i] && arr[i]<rightmin[i])
//////////        {
//////////            return arr[i];
//////////        }
//////////    }
//////////    return -1;
//////////}
//////////int main()
//////////{
//////////    int n;
//////////    cout<<"enter the size";
//////////    cin>>n;
//////////
//////////    vector<int> arr(n);
//////////
//////////    cout<<"enter the elements";
//////////    for(int i=0;i<n;i++)
//////////    {
//////////        cin>>arr[i];
//////////    }
//////////
//////////    int result=findpartitionelement(arr);
//////////     if (result != -1)
//////////        cout << "The partition element is: " << result << endl;
//////////    else
//////////        cout << "No partition element found." << endl;
//////////
//////////
//////////}
////////
////////
//////////#include<iostream>
//////////#include<vector>
//////////using namespace std;
//////////int findkthsmallest(vector<vector<int>>&matrix,int k)
//////////{
//////////    int n=matrix.size();
//////////    vector<int>elements;
//////////
//////////    for(int i=0;i<n;i++)
//////////    {
//////////        for(int j=0;j<n;j++)
//////////        {
//////////            elements.push_back(matrix[i][j]);
//////////        }
//////////    }
//////////    sort(elements.begin(),elements.end());
//////////
//////////    return elements[k-1];
//////////}
//////////int main()
//////////{
//////////    int n,k;
//////////    cout<<"enter the size";
//////////    cin>>n;
//////////
//////////    vector<int> &arr;
//////////
//////////    cout<<"enter the elements";
//////////    for(int i=0;i<n;i++)
//////////    {
//////////        for(int j=0;j<n;j++)
//////////        {
//////////        cin>>arr[i];
//////////        }
//////////    }
//////////    cout<<"enter the k";
//////////    cin>>k;
//////////
//////////    int result=findkthsmallest(matrix,k);
//////////
//////////    cout<<result<<endl;
//////////
//////////}
////////
////////
//////////#include<iostream>
//////////#include<vector>
//////////#include<algorithm>
//////////using namespace std;
//////////void countingsort(vector<int> &arr)
//////////{
//////////    if(arr.empty())
//////////    {
//////////        return;
//////////    }
//////////    int max_Element=*max_element(arr.begin(),arr.end());
//////////    int min_Element=*min_element(arr.begin(),arr.end());
//////////    int range=max_Element-min_Element+1;
//////////
//////////    vector<int>count(range,0);
//////////    vector<int>output(arr.size());
//////////
//////////    for(int num:arr)
//////////    {
//////////        count[num-min_Element]++;
//////////    }
//////////
//////////    for(int i=1;i<range;i++)
//////////    {
//////////        count[i]+=count[i-1];
//////////    }
//////////
//////////    for(int i=arr.size()-1;i>=0;i--)
//////////    {
//////////        output[count[arr[i]-min_Element]-1]=arr[i];
//////////        count[arr[i]-min_Element]--;
//////////    }
//////////
//////////    for(int i=0;i<arr.size();i++)
//////////    {
//////////        arr[i]=output[i];
//////////    }
//////////}
//////////int main()
//////////{
//////////    int n;
//////////    cout<<"enter the size"<<endl;
//////////    cin>>n;
//////////
//////////    if(n<=0)
//////////    {
//////////        cout<<"invalid size"<<endl;
//////////        return 1;
//////////    }
//////////
//////////    vector<int> arr(n);
//////////    for(int i=0;i<n;i++)
//////////    {
//////////        cin>>arr[i];
//////////    }
//////////
//////////    cout<<"original array"<<endl;
//////////    for(int num:arr)
//////////    {
//////////        cout<<num<<" "<<endl;
//////////    }
//////////    countingsort(arr);
//////////
//////////    cout<<"sorted array"<<endl;
//////////    for(int num:arr)
//////////    {
//////////        cout<<num<<" "<<endl;
//////////    }
//////////}
////////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////void sortcolors(vector<int> &arr,int n)
////////{
////////    int l=0,mid=0,high=n-1;
////////
////////    while(mid<=high)
////////    {
////////        if(arr[mid]==0)
////////        {
////////            swap(arr[l],arr[mid]);
////////            l++;
////////            mid++;
////////        }
////////        else if(arr[mid]==1)
////////        {
////////            mid++;
////////        }
////////        else
////////        {
////////            swap(arr[mid],arr[high]);
////////            high--;
////////        }
////////    }
////////}
////////
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements(0,1,2)";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    sortcolors(arr,n);
////////
////////    cout<<"sorted array:";
////////    for(int i=0;i<n;i++)
////////    {
////////        cout<<arr[i]<<" ";
////////    }
////////}
////////
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int binarysearch(vector<int>&arr,int n,int target)
////////{
////////    int low=0;
////////    int high=n-1;
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(arr[mid]==target)
////////        {
////////            return mid;
////////        }
////////        else if(arr[mid]<target)
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return -1;
////////}
////////int main()
////////{
////////    int n,target;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter the target";
////////    cin>>target;
////////
////////    int result=binarysearch(arr,n,target);
////////
////////    if(result!=-1)
////////    {
////////        cout<<"target found at index"<<result;
////////    }
////////    else
////////    {
////////        cout<<"target not found";
////////    }
////////
////////
////////}
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int searchinsert(vector<int> &arr,int target)
////////{
////////    int n=arr.size();
////////    int low=0;
////////    int high=n-1;
////////    int answer=0;
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////        if(arr[mid]>=target)
////////        {
////////            answer=min(answer,mid);
////////            high=mid-1;
////////        }
////////        else
////////        {
////////            low=mid+1;
////////        }
////////    }
////////    return answer;
////////}
////////int main()
////////{
////////    int n,target;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the target";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter the target";
////////    cin>>target;
////////
////////    int result=searchinsert(arr,target);
////////    cout<<"target should be inserted at index"<<result;
////////
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int firstposition(vector<int> &arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////    int first=-1;
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////        if(arr[mid]==target)
////////        {
////////            first=mid;
////////            high=mid-1;
////////        }
////////        else if(arr[mid]<target)
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return first;
////////}
////////
////////int lastposition(vector<int> &arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////    int last=-1;
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////        if(arr[mid]==target)
////////        {
////////            last=mid;
////////            low=mid+1;
////////        }
////////        else if(arr[mid]<target)
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return last;
////////}
////////
////////vector<int> searchrange(vector<int>&arr,int target)
////////{
////////    return{firstposition(arr,target),lastposition(arr,target)};
////////}
////////int main()
////////{
////////    int n,target;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the element";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter target element";
////////    cin>>target;
////////
////////    vector<int>result=searchrange(arr,target);
////////    cout<<"first and last position: ["<<result[0]<<", "<<result[1]<<"]"<<endl;
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int search(vector<int>&arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(arr[mid]==target)
////////        {
////////            return mid;
////////        }
////////
////////        if(arr[low]<=arr[mid])
////////        {
////////            if(arr[low]<=target && target<arr[mid])
////////            {
////////                high=mid-1;
////////            }
////////            else
////////            {
////////                low=mid+1;
////////            }
////////        }
////////        else
////////        {
////////            if(arr[mid]<target && target<=arr[high])
////////            {
////////                low=mid+1;
////////            }
////////            else
////////            {
////////                high=mid-1;
////////            }
////////        }
////////    }
////////    return -1;
////////}
////////
////////int main()
////////{
////////    int n,target;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter the target";
////////    cin>>target;
////////
////////    int result=search(arr,target);
////////    if(result!=-1)
////////    {
////////        cout<<"target found at index"<<result<<endl;
////////    }
////////    else
////////    {
////////        cout<<"target not found"<<endl;
////////    }
////////}
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int findpeak(vector<int>&arr)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////
////////    while(low<high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(arr[mid]>arr[mid+1])
////////        {
////////            high=mid;
////////        }
////////        else
////////        {
////////            low=mid+1;
////////        }
////////    }
////////    return low;
////////}
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    int peakindex=findpeak(arr);
////////
////////    cout<<"peak elemnet index"<<peakindex<<endl;
////////    cout<<"peak element: "<<arr[peakindex]<<endl;
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int singlenonduplicate(vector<int> &arr)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////
////////    while(low<high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(mid%2==1)
////////        {
////////            mid--;
////////        }
////////
////////        if(arr[mid]==arr[mid+1])
////////        {
////////            low=mid+2;
////////        }
////////        else
////////        {
////////            high=mid;
////////        }
////////    }
////////    return nums[low];
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////int findmin(vector<int>&arr)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////
////////    while(low<high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(arr[mid]>arr[high])
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid;
////////        }
////////    }
////////    return arr[low];
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int findbookposition(vector<int>&book,int target)
////////{
////////    int low=0;
////////    int high=book.size()-1;
////////
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(book[mid]==target)///book with same no found
////////        {
////////            return mid;
////////        }
////////        else if(book[mid]<target)///search on the right side
////////        {
////////            low=mid+1;
////////        }
////////        else  ///search on the left side
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return low;
////////}
//////
//////
////////int maxsquareside(int x)
////////{
////////    if(x<2)
////////    {
////////        return x;
////////    }
////////
////////    int low=1;
////////    int high=x/2;
////////    int result=1;
////////
////////    while(low<=high)
////////    {
////////        long long mid=low+(high-low)/2;
////////        long long square=mid*mid;
////////
////////        if(square==x)
////////        {
////////            return mid;
////////        }
////////        else if(square<x)
////////        {
////////            result=mid;
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return result;
////////}
////////
////////int main()
////////{
////////   int x;
////////   cout<<"enter the land size";
////////   cin>>x;
////////
////////   int sidelength=maxsquareside(x);
////////
////////   cout<<"max possibel side length"<<sidelength<<" ";
////////
////////
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////int firstoccurence(vector<int>&arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////    int result=-1;
////////
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////        if(arr[mid]==target)
////////        {
////////            result=mid;
////////            high=mid-1;
////////        }
////////        else if(arr[mid]<target)
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return result;
////////}
////////int lastoccurence(vector<int>&arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////    int result=-1;
////////    while(low<=high)
////////    {
////////        int mid=low+(high-low)/2;
////////        if(arr[mid]==target)
////////        {
////////            result=mid;
////////            low=mid+1;
////////        }
////////        else if(arr[mid]<target)
////////        {
////////            low=mid+1;
////////        }
////////        else
////////        {
////////            high=mid-1;
////////        }
////////    }
////////    return result;
////////}
////////
////////vector<int>searchrange(vector<int>&arr,int target)
////////{
////////    int first=firstoccurence(arr,target);
////////    int last= lastoccurence(arr,target);
////////    return {first,last};
////////}
////////
////////int main()
////////{
////////    int n,target;
////////    cout<<"enter the no of reservation";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////    cout<<"enter the reservation no in sorted";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter the target no";
////////    cin>>target;
////////
////////    vector<int>result=searchrange(arr,target);
////////
////////    if(result[0]==-1)
////////    {
////////        cout<<"movie not found"<<endl;
////////    }
////////    else
////////    {
////////        cout<<"first occurence"<<result[0]<<endl;
////////        cout<<"last occurence"<<result[1]<<endl;
////////    }
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////int searchrotatedarray(vector<int> &arr,int target)
////////{
////////    int low=0;
////////    int high=arr.size()-1;
////////
////////    while(low<high)
////////    {
////////        int mid=low+(high-low)/2;
////////
////////        if(arr[mid]==target)
////////        {
////////            return mid;
////////        }
////////        if(arr[low]<=arr[mid])
////////        {
////////            if(arr[low]<=target && target<arr[mid])
////////            {
////////                high=mid-1;
////////            }
////////            else
////////            {
////////                low=mid+1;
////////            }
////////        }
////////        else
////////        {
////////            if(arr[mid]<target && target<=arr[high])
////////            {
////////                low=mid+1;
////////            }
////////            else
////////            {
////////                high=mid-1;
////////            }
////////        }
////////    }
////////    return -1;
////////}
////////int main()
////////{
////////    int n;
////////    int target;
////////    cout<<"enter the number of storage units";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////    cout<<"enter the target";
////////    cin>>target;
////////
////////    int result=searchrotatedarray(arr,target);
////////
////////    if(result!=-1)
////////    {
////////        cout<<"target found at index"<<result<<endl;
////////    }
////////    else
////////    {
////////        cout<<"package not found"<<endl;
////////    }
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////#include<algorithm>
////////using namespace std;
////////
////////void merge(vector<int>&arr,int left,int mid,int right)
////////{
////////    int n1=mid-left+1;
////////    int n2=right-mid;
////////
////////    vector<int>L(n1);
////////    vector<int>R(n2);
////////
////////    for(int i=0;i<n1;i++)
////////    {
////////        L[i]=arr[left+i];
////////    }
////////    for(int j=0;j<n2;j++)
////////    {
////////        R[j]=arr[mid+j+1];
////////    }
////////
////////    int i=0,j=0,k=left;
////////
////////    while(i<n1 && j<n2)
////////    {
////////        if(L[i]<=R[j])
////////        {
////////            arr[k++]=L[i++];
////////        }
////////        else
////////        {
////////            arr[k++]=R[j++];
////////        }
////////    }
////////
////////    while(i<n1)
////////    {
////////        arr[k++]=L[i++];
////////    }
////////    while(j<n2)
////////    {
////////        arr[k++]=R[j++];
////////    }
////////}
////////void mergesort(vector<int>&arr,int left,int right)
////////{
////////    while(left<right)
////////    {
////////        int mid=left+(right-left)/2;
////////        mergesort(arr,left,mid);
////////        mergesort(arr,mid+1,right);
////////        merge(arr,left,mid,right);
////////    }
////////}
////////
////////void printarr(vector<int>&arr,int n)
////////{
////////    for(int i=0;i<n;i++)
////////    {
////////        cout<<arr[i]<<" ";
////////    }
////////}
////////
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////     mergesort(arr,0,n-1);
////////
////////     printarr(arr,n);
////////}
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
//vector<int> mergesortedarray(vector<int>&arr1,vector<int>&arr2)
//{
//    int n1=arr1.size();
//    int n2=arr2.size();
//    vector<int>mergearray(n1+n2);
//
//    int i=0,j=0,k=0;
//
//    while(i<n1 && j<n2)
//    {
//        if(arr1[i]<=arr2[j])
//        {
//            mergearray[k++]=arr1[i++];
//        }
//        else
//        {
//            mergearray[k++]=arr2[j++];
//        }
//    }
//
//    while(i<n1)
//    {
//        mergearray[k++]=arr1[i++];
//    }
//    while(j<n2)
//    {
//        mergearray[k++]=arr2[j++];
//    }
//    return mergearray;
//}
////////int main()
////////{
////////    int n1,n2;
////////    cout<<"enter the size";
////////    cin>>n1;
////////
////////    vector<int>arr1(n1);
////////    cout<<"enter the elements";
////////    for(int i=0;i<n1;i++)
////////    {
////////        cin>>arr1[i];
////////    }
////////
////////    cout<<"enter the size";
////////    cin>>n2;
////////
////////    vector<int>arr2(n2);
////////    cout<<"enter the elements";
////////    for(int i=0;i<n2;i++)
////////    {
////////        cin>>arr2[i];
////////    }
////////
////////    vector<int>result=mergesortedarray(arr1,arr2);
////////
////////    cout<<"merged sorted array";
////////    for(int num:result)
////////    {
////////        cout<<num<<" ";
////////    }
////////}
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////vector<int>merge(vector<int>&arr,int left,int mid,int right)
////////{
////////    int n1=mid-left+1;
////////    int n2=right-mid;
////////
////////    vector<int>L(n1);
////////    vector<int>R(n2);
////////
////////    for(int i=0;i<n1;i++)
////////    {
////////        L[i]=arr[left+i];
////////    }
////////    for(int j=0;j<n2;j++)
////////    {
////////        R[j]=arr[right+1+j];
////////    }
////////
////////    int i=0,j=0,k=left;
////////    int invercount=0;
////////
////////    while(i<n1 && j<n2)
////////    {
////////        if(L[i]<=R[j])
////////        {
////////            arr[k++]=L[i++];
////////        }
////////        else
////////        {
////////            arr[k++]=R[j++];
////////            invercount+=(n1-i);
////////        }
////////    }
////////    while(i<n1)
////////    {
////////        arr[k++]=L[i++];
////////    }
////////    while(j<n2)
////////    {
////////        arr[k++]=R[j++];
////////    }
////////    return invercount;
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////void merge(vector<int>&arr,int left,int mid,int right)
////////{
////////    int n1=mid-left+1;
////////    int n2=right-mid;
////////
////////    vector<int>L(n1);
////////    vector<int>R(n2);
////////
////////    for(int i=0;i<n1;i++)
////////    {
////////        L[i]=arr[left+i];
////////    }
////////    for(int j=0;j<n2;j++)
////////    {
////////        R[j]=arr[mid+1+j];
////////    }
////////
////////    int i=0,j=0,k=left;
////////
////////    while(i<n1 && j<n2)
////////    {
////////        if(L[i]<=R[j])
////////        {
////////            arr[k++]=L[i++];
////////        }
////////        else
////////        {
////////            arr[k++]=R[j++];
////////        }
////////    }
////////    while(i<n1)
////////    {
////////        arr[k++]=arr[i++];
////////    }
////////    while(j<n2)
////////    {
////////        arr[k++]=arr[j++];
////////    }
////////}
////////void mergesort(vector<int>&arr,int left,int right)
////////{
////////     if(left<right)
////////     {
////////         int mid=left+(right-left)/2;
////////
////////         mergesort(arr,left,mid);
////////         mergesort(arr,mid+1,right);
////////         merge(arr,left,mid,right);
////////     }
////////}
////////
////////int findkthsmallest(vector<int>&arr,int k)
////////{
////////    int n=arr.size();
////////    mergesort(arr,0,n-1);
////////    return arr[k-1];
////////}
////////int main()
////////{
////////    int n,k;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter k";
////////    cin>>k;
////////
////////    if(k<1 || k>n)
////////    {
////////        cout<<"invalid"<<n<<endl;
////////    }
////////    cout<<"the"<<k<<"th smallest element is"<<findkthsmallest(arr,k)<<endl;
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////void merge(vector<string>&arr,int left,int mid,int right)
////////{
////////    int n1=mid-left+1;
////////    int n2=right-mid;
////////
////////    vector<string>L(n1);
////////    vector<string>R(n2);
////////
////////    for(int i=0;i<n1;i++)
////////    {
////////        L[i]=arr[left+i];
////////    }
////////    for(int j=0;j<n2;j++)
////////    {
////////        R[j]=arr[mid+1+j];
////////    }
////////
////////    int i=0,j=0,k=left;
////////
////////    while(i<n1 && j<n2)
////////    {
////////        if(L[i]<=R[j])
////////        {
////////            arr[k++]=L[i++];
////////        }
////////        else
////////        {
////////            arr[k++]=R[j++];
////////        }
////////    }
////////
////////    while(i<n1)
////////    {
////////        arr[k++]=L[i++];
////////    }
////////    while(j<n2)
////////    {
////////        arr[k++]=R[j++];
////////    }
////////}
////////
////////void mergesort(vector<string>&arr,int left,int right)
////////{
////////    if(left<right)
////////    {
////////        int mid=left+(right-left)/2;
////////
////////        mergesort(arr,left,mid);
////////        mergesort(arr,mid+1,right);
////////        merge(arr,left,mid,right);
////////    }
////////}
////////
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<string>arr(n);
////////    cout<<"enter the string";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    mergesort(arr,0,n-1);
////////
////////    cout<<"sorted strings";
////////
////////    for(const string&s:arr)
////////    {
////////        cout<<s<<" ";
////////    }
////////
////////}
/////////median of two sorted array
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////double findmediansortedarrays(vector<int>&arr1,vector<int>&arr2)
////////{
////////    int n1=arr1.size();
////////    int n2=arr2.size();
////////    int total=n1+n2;
////////
////////    int i=0,j=0,prev=0,current=0;
////////
////////    for(int k=0;k<=total/2;k++)
////////    {
////////        prev=current;
////////
////////        if(i<n1 && (j>=n2 || arr1[i]<=arr2[j]))
////////        {
////////            current=arr1[i++];
////////        }
////////        else
////////        {
////////            current=arr2[j++];
////////        }
////////    }
////////
////////    if(total%2==1)
////////    {
////////        return current;
////////    }
////////    return (prev+current)/2.0;
////////}
////////int main()
////////{
////////    int m,n;
////////    cout<<"enter the size of arr1";
////////    cin>>m;
////////
////////    cout<<"enter the size of arr2";
////////    cin>>n;
////////
////////    vector<int>arr1(m);
////////    vector<int>arr2(n);
////////
////////    cout<<"enter the element of arr1";
////////    for(int i=0;i<m;i++)
////////    {
////////        cin>>arr1[i];
////////    }
////////
////////    cout<<"enter the elements of arr2";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr2[i];
////////    }
////////
////////    double median=findmediansortedarrays(arr1,arr2);
////////
////////    cout<<"median of two arrays"<<median<<endl;
////////
////////}
//////
//////
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////int countwhilemerging(vector<int>&arr,int left,int mid,int right)
////////{
////////    int count=0;
////////    int j=mid+1;
////////
////////    for(int i=left;i<=mid;i++)
////////    {
////////        while(j<=right && (long long)arr[i]>2LL*arr[j])
////////        {
////////            j++;
////////        }
////////        count+=(j-mid-1);
////////    }
////////    vector<int>temp;
////////    int i=left,k=mid+1;
////////    while(i<=mid && k<=right)
////////    {
////////        if(arr[i]<=arr[k])
////////        {
////////            temp.push_back(arr[i++]);
////////        }
////////        else
////////        {
////////            temp.push_back(arr[k++]);
////////        }
////////    }
////////    while(i<=mid)
////////    {
////////        temp.push_back(arr[i++]);
////////    }
////////    while(k<=right)
////////    {
////////        temp.push+back(arr[k++]);
////////    }
////////
////////    for(int i=left;i<=right;i++)
////////    {
////////        arr[i]=temp[i-left];
////////    }
////////    return count;
////////}
////////int mergesort(vector<int>&arr,int left,int right)
////////{
////////    if(left>=right)
////////    {
////////        return 0;
////////    }
////////    int mid=left+(right-left)/2;
////////    int count=mergesort(arr,left,mid)+mergesort(arr,mid+1,right);
////////    count+=countwhilemerging(arr,left,mid,right);
////////    return count;
////////}
////////int reversepairs(vector<int>&arr)
////////{
////////    return mergesort(arr,0,arr.size()-1);
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////void merge(vector<int>&arr,int left,int mid,int right)
////////{
////////    int n1=mid-left+1;
////////    int n2=right-mid;
////////
////////    vector<int>L(n1);
////////    vector<int>R(n2);
////////
////////    for(int i=0;i<n1;i++)
////////    {
////////        L[i]=arr[left+i];
////////    }
////////    for(int j=0;j<n2;j++)
////////    {
////////        R[j]=arr[mid+1+j];
////////    }
////////
////////    int i=0,j=0,k=left;
////////
////////    while(i<n1 && j<n2)
////////    {
////////        if(L[i]<=R[j])
////////        {
////////            arr[k++]=L[i++];
////////        }
////////        else
////////        {
////////            arr[k++]=R[j++];
////////        }
////////    }
////////}
////////void mergesort(vector<int>&arr,int left,int right)
////////{
////////    if(left<right)
////////    {
////////        int mid=left+(right-left)/2;
////////        mergesort(arr,left,mid);
////////        mergesort(arr,mid+1,right);
////////        merge(arr,left,mid,right);
////////    }
////////}
////////
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements...";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    mergesort(arr,0,n-1);
////////
////////    cout<<"sorted array";
////////    for(int num:arr)
////////    {
////////        cout<<num<<" ";
////////    }
////////
////////}
//////
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////
////////int partition(vector<int>&arr,int low,int high)
////////{
////////    int pivot=arr[high];
////////    int i=low-1;
////////
////////    for(int j=low;j<high;j++)
////////    {
////////        if(arr[j]<pivot)
////////        {
////////            i++;
////////            swap(arr[i],arr[j]);
////////        }
////////    }
////////    swap(arr[i+1],arr[high]);
////////    return i+1;
////////}
////////
////////int partition(vector<int>&arr,int low,int high)
////////{
////////    int pivot=arr[high];
////////    int i=low-1;
////////    for(int j=low;j<high;j++)
////////    {
////////        if(arr[j]<pivot)
////////        {
////////            i++;
////////            swap(arr[i],arr[j]);
////////        }
////////    }
////////    swap(arr[i+1],arr[high]);
////////    return i+1;
////////}
////////
////////void quicksort(vector<int>&arr,int low,int high)
////////{
////////    if(low<high)
////////    {
////////        int pi=partition(arr,low,high);
////////        quicksort(arr,low,pi-1);
////////        quicksort(arr,pi+1,high);
////////    }
////////}
////////void quicksort(vector<int>&arr,int low,int high)
////////{
////////    if(low<high)
////////    {
////////        int pi=partition(arr,low,high);
////////        quicksort(arr,low,pi-1);
////////        quicksort(arr,pi+1,high);
////////
////////    }
////////}
////////
////////int main()
////////{
////////    int n;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter the elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    quicksort(arr,0,n-1);
////////
////////    cout<<"soted array";
////////    for(int i=0;i<n;i++)
////////    {
////////        cout<<arr[i]<<" ";
////////    }
////////
////////}
//////
//////
/////////kth largest element(quick select)
//////
////////#include<iostream>
////////#include<vector>
////////using namespace std;
////////int partition(vector<int>&arr,int low,int high)///partiotion function
////////{
////////    int pivot=arr[high];
////////    int i=low-1;
////////    for(int j=low;j<high;j++)
////////    {
////////        if(arr[j]<pivot)
////////        {
////////            i++;
////////            swap(arr[i],arr[j]);
////////        }
////////    }
////////    swap(arr[i+1],arr[high]);
////////    return i+1;
////////}
////////int quickselect(vector<int>&arr,int low,int high,int k)
////////{
////////    if(low<=high)
////////    {
////////        int pi=partition(arr,low,high);
////////        if(pi==k)
////////        {
////////            return arr[pi];
////////        }
////////        else if(pi<k)
////////        {
////////            return quickselect(arr,pi+1,high,k);
////////        }
////////        else
////////        {
////////            return quickselect(arr,low,pi-1,k);
////////        }
////////    }
////////    return -1;
////////}
////////
////////int findkthlargest(vector<int>&arr,int k)
////////{
////////    int n=arr.size();
////////    return quickselect(arr,0,n-1,k-1);
////////}
////////
////////int main()
////////{
////////    int n,k;
////////    cout<<"enter the size";
////////    cin>>n;
////////
////////    vector<int>arr(n);
////////
////////    cout<<"enter elements";
////////    for(int i=0;i<n;i++)
////////    {
////////        cin>>arr[i];
////////    }
////////
////////    cout<<"enter k";
////////    cin>>k;
////////
////////    cout<<" kth largest element: "<<findkthlargest(arr,k)<<endl;
////////}
////////
////////
//////
//////
//////#include<iostream>
//////#include<vector>
//////using namespace std;
//////
//////int main()
//////{
//////
//////}


//#include<iostream>
//#include<vector>
//using namespace std;
//int countpairs(vector<int>&arr1,vector<int>&arr2,int x)
//{
//    int n1=arr1.size();
//    int n2=arr2.size();
//    int count=0;
//    int i=0,j=n2-1;
//
//    while(i<n1 && j>=0)
//    {
//        int sum=arr1[i]+arr2[j];
//        if(sum==x)
//        {
//            count++;
//            i++;
//            j--;
//        }
//        else if(sum<x)
//        {
//            i++;
//        }
//        else
//        {
//            j--;
//        }
//    }
//    return count;
//

#include<iostream>
#include<vector>
using namespace std;

int searchinsert(vector<int>&arr,int k)
{
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}

int main()
{
    int n,k;
    cout<<"enter the size";
    cin>>n;

    vector<int>arr(n);

    cout<<"enter the sorted elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the target";
    cin>>k;

    int position=searchinsert(arr,k);

    cout<<"insert position of k is: "<<position<<endl;
}
