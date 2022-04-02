/*
 FileName:T4_33.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a<0||b<0||c<0)
        cout<<"no"<<endl;
    else
    {
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }


    return 0;
}
