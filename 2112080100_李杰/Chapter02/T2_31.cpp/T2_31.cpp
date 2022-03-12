/*
 FileName:T2_31.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 11,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    float mail,price,mail1,price1,price2,price3;
    cout<<"put the total number of miles driven per day"<<endl;
    cin>>mail;
    cout<<"put the price of a gallon of gas"<<endl;
    cin>>price1;
    cout<<"put the average miles per gallon"<<endl;
    cin>>mail1;
    cout<<"put the daily parking charges"<<endl;
    cin>>price2;
    cout<<"put the daily tolls"<<endl;
    cin>>price3;
    price=(mail/mail1)*price1+price2+price3;
    cout<<"the price per day: "<<price<<endl;
    return 0;
}
