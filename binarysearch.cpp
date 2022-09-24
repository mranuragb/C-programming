#include<iostream>
using namespace std;

bool Binary(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end)
  {
     if(arr[mid]==target)
     {
        return true;
     }

     if(target>arr[mid])
     {
        start=mid+1;
     }

     if(target<arr[mid])
     {
        end=mid-1;
     }

      mid=(start+end)/2;
  }  

    return false;
}

int main()
{
    int n;
    cout<<"Enter the element "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the Target "<<endl;
    cin>>target;

    bool found=Binary(arr,n,target);

    if(found)
    {
        cout<<"It is a Binary Search "<<endl;
    }
    else
    {
        cout<<"It is Not a Binary Search "<<endl;
    }

    return 0;
}