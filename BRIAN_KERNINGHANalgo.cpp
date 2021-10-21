#include<iostream>
#include<stdio.h>
using namespace std;

int CountSetBit(int n)
{
    int res=0;
    while (n>0)
    {
        n=(n&(n-1));
        res++;
    }
    return res;
    
}
int main()
{
    int n=31;
    cout<<CountSetBit(n);

}
/* time complexity is theta  of set bit count
op*/
