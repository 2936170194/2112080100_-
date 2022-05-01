/*
 FileName:T4_27.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

int main ()
{
    long long a,b=0,i;
    cin>>a;
    i=0;
    while(a>0)
    {
    b=(a%10)*pow(2,i)+b;
    a=a/10;
    i++;
    }
    cout<<b<<endl;

    return 0;
}
