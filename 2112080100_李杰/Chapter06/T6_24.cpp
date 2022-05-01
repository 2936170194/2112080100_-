/*
 FileName:T6_.24cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

int f(int a,int b);

int g(int a,int b);

int main ()
{
    int i,a,b=10;
    int c[99999]= {0};
    cin>>a;
    for(i=1; a>0; i++)
    {
        c[i]=g(a,b);
        a=f(a,b);
    }
    i--;
    for(; i>=1; i--)
    {
        cout<<c[i]<<" ";
    }


    return 0;
}
int f(int a,int b)
{
    return a/b;
}
int g(int a,int b)
{
    return a%b;
}
