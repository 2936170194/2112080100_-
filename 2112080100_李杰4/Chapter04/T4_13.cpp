/*
 FileName:T4_13.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

int main ()
{
    double a,b,c,d,e=0,f=0;
	while(1)
	{
		cout<<"Enter miles driven (-1 to quit): ";
		cin>>a;
		if(a==-1)break;
		cout<<"Enter gallons used: ";
		cin>>b;
		c=a/b;
		cout<<"MPG this trip: "<<fixed<<setprecision(6)<<c<<endl;
		e=e+a;
		f=f+b;
		d=e/f;
		cout<<"Total MPG: "<<fixed<<setprecision(6)<<d<<endl;
	}
    return 0;
}
