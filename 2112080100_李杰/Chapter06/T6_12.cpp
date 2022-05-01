/*
 FileName:T6_.12cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <math.h>

#include <iomanip>

using namespace std;

float calculateCharges(float a);

int main ()
{
    float a,b,c;
    float x1,x2,x3;
    cin>>a>>b>>c;
    x1=calculateCharges(a);
    x2=calculateCharges(b);
    x3=calculateCharges(c);
    cout<<"Car"<<"\t"<<"Hours"<<"\t"<<"Charge"<<endl;
    cout<<"1"<<"\t"<<fixed<<setprecision(2)<<a<<"\t"<<x1<<endl;
    cout<<"2"<<"\t"<<fixed<<setprecision(2)<<b<<"\t"<<x2<<endl;
    cout<<"3"<<"\t"<<fixed<<setprecision(2)<<c<<"\t"<<x3<<endl;
    cout<<"TOTAL"<<"\t"<<fixed<<setprecision(2)<<1.00*(a+b+c)<<"\t"<<1.00*(x1+x2+x3)<<endl;



    return 0;
}
float calculateCharges(float a)
{
    float b;
    if(a<=3)
    b=2;
    else
    b=ceil(a-3)*0.5+2;
    if(b>10)
    b=10;

    return b;
}
