/*
 FileName:T4_37.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

int main ()
{
    long long a,c;
    cin>>a;
    double b=0.0034;
    int i=1;
    while( i<=75)
    {
        if(i==1)
            c=0;
        else
            c=a*b;
        a=a+c;
        cout<<i<<"	"<<a<<"	"<<c<<endl;
        i++;
    }
    return 0;
}
