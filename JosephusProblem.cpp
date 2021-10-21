#include<stdio.h>
#include<iostream>
using namespace std;

int Josephus(int n, int k)  //inde biggening at 0
{
    if(n==1)
        return 0;
    else
        return (Josephus(n-1,k)+k)%n;
}
int MyJosephus(int n, int k)
{
    return Josephus(n,k)+1;
}
int main()
{
    int n=3;
    int k=2;
    cout<<"For index starting from 0 survivor is: "<<Josephus(n,k)<<endl;
    cout<<"for index starting from 1 surviovr is: "<<MyJosephus(n,k);
    //printf("we");
    //printf("we");

}