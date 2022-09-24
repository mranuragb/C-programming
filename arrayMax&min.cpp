#include<iostream>
#include<limits.h>
using namespace std;

void FindArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            cout<<max=arr[i];
        }
        if(arr[i]<min)
        {
            cout<<min=arr[i];
        }

    }
    cout<<"Max = "<<max<<"Min = "<<min;
}

int main()
{
    int n;
    cout<<"Enter the element "<<endl;
    cin>>n;

    FindArray(n);

    return 0;
}