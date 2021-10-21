#include<stdio.h>
#include<iostream>
using namespace std;

int isPrime(int n)
{
    if (n==1)
    {
        return false;
    }
    for(int i =2; i*i<=n;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
   
}
void printPrime(int n)
{
    for (int i = 2; i <=n; i++)
    {
        if(isPrime(i))
         printf("%d\n",i);
    }
    
}
int main()
{
    int n=20;
    printPrime(n);
    return 0;

}