/*
 FileName:T6_.14cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

float roundToInteger(float a);

float roundToTenths(float a);

float roundToHundredths(float a);

float roundToThousandths(float a);


int main ()
{
    float a;
    cin>>a;
    cout<<roundToInteger(a)<<"\t"<<roundToTenths(a)<<"\t"<<roundToHundredths(a)<<"\t"<<roundToThousandths(a)<<endl;

    return 0;
}
float roundToInteger(float a)
{
    a=floor(a+0.5);
    return a;
}
float roundToTenths(float a)
{
    a=floor(a*10+0.5)/10;
    return a;
}

float roundToHundredths(float a)
{
    a=floor(a*100+0.5)/100;
    return a;
}

float roundToThousandths(float a)
{
    a=floor(a*1000+0.5)/1000;
    return a;
}
