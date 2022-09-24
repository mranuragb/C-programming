#include<iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>

using namespace std;
int findMax(int a,int b)
{
    if(a>b)
    {
       return a;
    }
     else
       {
         return b;  
       } 
}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    for(int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            cout<<findMax(abs(i-n),abs(j-n))+1<<"  ";
        }
        cout<<endl;
    }
}