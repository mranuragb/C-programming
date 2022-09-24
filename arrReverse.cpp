#include<iostream>
#include<cstdlib>
using namespace std;

void ReverseArray(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    

    int arr[5]={12,25,52,55,85};
    ReverseArray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}