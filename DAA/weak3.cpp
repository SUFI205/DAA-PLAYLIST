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
//    for(int i=0;i<n-1;i++)
//    {
//        int min_idx=i;
//
//        for(int j=i+1;j<n;++j)
//        {
//            if(arr[j]<arr[min_idx])
//            {
//                min_idx=j;
//            }
//        }
//        swap(arr[i],arr[min_idx]);
//    }
//
//    cout<<"sorted array";
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<endl;
//    }
//}
///given unsorted arr of integer design algo and pgm to sort the array usinh insertion sort yourr pgm able to find number of comparison and shifts requiredfor array
//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n,comparision=0,shift=0;
//    cout<<"enter the size of array";
//    cin>>n;
//
//    int arr[n];
//
//    cout<<"enter the array element";
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    for(int i=1;i<n;i++)
//    {
//        int j=i-1;
//        int temp=arr[i];
//        while(j>=0 && arr[j]>temp)
//        {
//            arr[j+1]=arr[j];
//            comparision++;
//            j--;
//            shift++;
//        }
//        arr[j+1]=temp;
//        shift++;
//    }
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<endl;
//    }
//    cout<<"total number of comparision"<<comparision<<endl;
//    cout<<"total number of shifts"<<shift<<endl;
//
//}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;

    int arr[n];

    cout<<"enter the element";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   sort(arr,arr+n);

   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]==arr[j])
           {
               cout<<"yes"<<endl;
           }
       }
   }
   cout<<"no"<<endl;
}

















