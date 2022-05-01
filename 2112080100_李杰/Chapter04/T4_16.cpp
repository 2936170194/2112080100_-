/*
 FileName:T4_16.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

int main ()
{
    double a,b,c;
	while(1)
	{
		cout<<"Enter hours worked (-1 to end): ";
		cin>>a;
		if(a==-1)break;
		cout<<"Enter hourly rate of the employee ($00.00): ";
		cin>>b;
		if(a<=40)
		c=a*b;
		else
		c=40*b+(a-40)*1.5*b;
		cout<<"Salary is $"<<fixed<<setprecision(2)<<c<<endl;
	}
    return 0;
}
