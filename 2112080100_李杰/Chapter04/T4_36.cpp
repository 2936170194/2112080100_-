/*
 FileName:T4_36.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <string>

using namespace std;

int main ()
{
    int a, b, c, d, e, s;
    cin >> a;
    b= a % 10;
    a/=10;
    c=a%10;
    a/=10;
    d= a%10;
    a/=10;
    e=a%10;
    if (b<7)
        b= b+10-7;
    else
        b=b-7;
    if (c<7)
        c=c+3;
    else
        c=c-7;
    if (d< 7)
        d=d+3;
    else
        d=d-7;
    if (e<7)
        e=e+3;
    else
        e=e-7;
    s= c*1000 + b*100 + e*10 + d;
    cout<<s<<endl;
    return 0;
}
