/*
 FileName:T6_.19cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

double hypotenuse(double a,double b);

int main ()
{
    double a1=3.0,a2=4.0,b1=5.0,b2=12.0,c1=8.0,c2=15.0;
    cout<<"1"<<": "<<hypotenuse(a1,a2)<<endl;
    cout<<"2"<<": "<<hypotenuse(b1,b2)<<endl;
    cout<<"3"<<": "<<hypotenuse(c1,c2)<<endl;
    return 0;
}
double hypotenuse(double a,double b)
{
double c;
c=sqrt(a*a+b*b);
}
