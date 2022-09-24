#include<iostream>
using namespace std;

class Solution
{
    public :
    int findcomplement(int num)
    {
        int mask=0;
        while(mask<num)
        {
            mask=(mask<<1)|1;
        }
        int ans=(~num)&mask;
        return ans;
    }

};
int main()
{
    int n=5;
    Solution obj;
    obj.findcomplement(n);
    return 0;
}
