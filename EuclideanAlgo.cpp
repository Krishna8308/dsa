#include<iostream>
#include<stdio.h>  
using namespace std;
int Gcd(int a, int b)
{
        if(b==0)
        {
            return a;
        }
        return Gcd(b,a%b);
}
int main()
{
    int a=10, b=15;
    cout<<Gcd(a,b);
}
//EUCLIDEAN ALGORITHM TO FIND THE GREATEST COMMON DIVISER
