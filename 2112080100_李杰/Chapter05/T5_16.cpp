/*
 FileName:T5_16.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */# include <iostream>

# include <iomanip>

# include <cmath>

using namespace std;

int main ()
{
    double amount;
    double principa1=1000.0;
    double rate= .05;
    int a,b,p;

    cout<<"year"<<setw(30)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);


        for(unsigned int year=1;year<=10;++year)
    {
    p=principa1*100;
    p = p * pow(1.0+rate,year);
    a=p/100;
    b=(p-100*a);



    cout<<setw(4)<<year<<setw(21)<<a<<"."<<b<<endl;
    if(10==year)
        cout<<endl<<endl;
    }


        return 0;
}
