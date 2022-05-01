/*
 FileName:T5_6.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int i,a=0,sum=0;
    for(i=0;a!=9999;i++)
    {
    cin>>a;
    sum=sum+a;
    }
    cout<<(float)(sum-9999)/(i-1)<<endl;
    return 0;
}
