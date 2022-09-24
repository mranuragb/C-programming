#include<iostream>
using namespace std;

void Fabonacii(int n)
{
    int first=-1;
    //int first=0;
    int second=1;

    for(int i=0;i<n;i++)
    {
        int sum=first+second;
        cout<<sum<<" ";
        first=second;
        second=sum;
    }

}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
   // cout<<"0"<<" ";

    Fabonacii(n);

    return 0;
}