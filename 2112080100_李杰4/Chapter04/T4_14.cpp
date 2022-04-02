/*
 FileName:T4_14.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

int main ()
{
    float a,b,c,d,e,f,g;
	while(1)
	{
		cout<<"Enter account number(or -1 to quit):";
		cin>>a;
		if(a==-1)break;
		cout<<"Enter beginning balance: ";
		cin>>b;
		cout<<"Enter total charges: ";
		cin>>c;
		cout<<"Enter total credits: ";
		cin>>d;
		cout<<"Enter credit limit: ";
		cin>>e;
		f=b+c-d;
		cout<<"New balance is "<<fixed<<setprecision(2)<<f<<endl;
		cout<<"Account: "<<"	"<<fixed<<setprecision(2)<<a<<endl;
		cout<<"Credit limit: "<<"	"<<fixed<<setprecision(2)<<e<<endl;
		cout<<"Balance: "<<"	"<<fixed<<setprecision(2)<<f<<endl;
		if(f>e)
		cout<<"Credit Limit Exceeded."<<endl;
	}
    return 0;
}
