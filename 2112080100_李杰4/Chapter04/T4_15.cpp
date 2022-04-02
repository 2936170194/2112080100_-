/*
 FileName:T4_15.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

int main ()
{
    double a,b,c,d;
	while(true)
	{
		cout<<"Enter sales in dollars(-1 to end): ";
		cin>>a;
		if(a==-1)break;
		b=200+(a*0.09);
		cout<<"Salary is: $"<<fixed<<setprecision(2)<<b<<endl;
		cout<<endl;
	}
    return 0;
}
