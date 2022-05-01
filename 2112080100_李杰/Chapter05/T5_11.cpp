/*
 FileName:T5_11.cpp
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
    double principal=1000.0;
    double rate= .05;

    cout<<"year"<<setw(30)<<"Amount on deposit"<<endl;
    cout<<fixed<<setprecision(2);

    for(rate=0.05;rate<=0.10;rate=rate+0.01)
    {

        for(unsigned int year=1;year<=10;++year)
    {
    amount = principal * pow(1.0+rate,year);
    cout<<setw(4)<<year<<" "<<rate<<setw(20)<<amount-24<<endl;
    if(10==year)
        cout<<endl<<endl;
    }
    }


        return 0;
}
