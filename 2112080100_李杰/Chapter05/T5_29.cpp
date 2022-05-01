/*
 FileName:T5_29.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 # include <iostream>

# include <iomanip>

# include <cmath>

using namespace std;

int main ()
{
    double amount;
    double principal=24;
    double rate= .05;

    cout<<"year"<<setw(30)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);

    for(rate=0.05;rate<=0.10;rate=rate+0.01)
    {

        for(unsigned int year=1;year<=396;++year)
    {
    amount = principal * pow(1.0+rate,year);
    if(year==396)
    cout<<setw(4)<<year<<" "<<rate<<setw(30)<<amount-24<<endl;
    }
    }


        return 0;
}
