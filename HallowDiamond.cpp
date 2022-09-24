#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)         //FIRST PART
        {
            if(j==n-i+1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-1;j++)        //SECOND PART
        {
            if(j==i-1)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)       // THIRD PART
        {
            if(j==i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int j=1;j<=n-1;j++)     //FOURTH PART
        {
            if(j==n-i)
            {
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}