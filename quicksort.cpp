#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotIn=s+count;

    swap(arr[pivotIn],arr[s]);

    int i=s,j=e;

    while(i<pivotIn && j>pivotIn)
    {
        while(i<pivot)
        {
            i++;
        }

        while(j>pivot)
        {
            j--;
        }

        if(i<pivotIn && j>pivotIn)
        {
            swap(arr[i++],arr[j++]);
        }
    }

    return pivotIn;
}

void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[]={12,2,1,5,3,6,8};
    int n=7;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;






    // int n;
    // cout<<"Enter the Element " <<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the Array "<<endl;

    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    // quickSort(arr,0,n-1);

    // cout<<"Sorted Array is "<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

   
}