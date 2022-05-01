/*
 FileName:T6_.25cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

int f(int a,int b,int c);

int main ()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=f(a,b,c);
    cout<<d<<endl;


    return 0;
}
int f(int a,int b,int c)
{
    int d;
    d=3600*a+60*b+c;
    return d;
}
