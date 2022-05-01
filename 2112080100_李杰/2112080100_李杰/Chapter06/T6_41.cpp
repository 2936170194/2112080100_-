/*
 FileName:T6_.41cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

int gcd(int a,int b);

int main ()
{
    int a,b,x,y;
    cin>>a>>b;
    x=max(a,b);
    y=min(a,b);
    cout<<gcd(x,y);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0)
    return a;
    if(b!=0)
    return gcd(b,a%b);
}
