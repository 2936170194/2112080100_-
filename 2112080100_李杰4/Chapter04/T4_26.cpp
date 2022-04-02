/*
 FileName:T4_26.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int a,b=0,c;
    cin>>a;
    c=a;
    while(a>0)
    {
    b=a%10+10*b;
    a=a/10;
    }
    if(b==c)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

    return 0;
}
