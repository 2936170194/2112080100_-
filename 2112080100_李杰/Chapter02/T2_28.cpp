/*
 FileName:T2_28.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 11,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int a,b,c,d,e,m;
    cin>>m;
    a=m/10000;
    b=(m%10000)/1000;
    c=(m%1000)/100;
    d=(m%100)/10;
    e=m%10;
    cout<<a<<"   "<<b<<"   "<<c<<"   "<<d<<"   "<<e<<endl;
    return 0;
}
