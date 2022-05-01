/*
 FileName:T6_.18cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

int integerPower(int base,unsigned int exponent);

int main ()
{
    int a,b,c;
    cin>>a>>b;
    c=integerPower(a,b);
    cout<<c;

    return 0;
}
int integerPower(int base , unsigned int exponent)
{
    int a=1;
    for(int i=1;i<=exponent; i++)
    {
    a=a*base;
    }
    return a;
}
