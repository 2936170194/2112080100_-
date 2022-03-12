/*
 FileName:T2_30.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 11,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    float BMI,G,H;
    cin>>G>>H;
    BMI=G/(H*H);
    cout<<"BMI: \t\t"<<BMI<<endl;
    cout<<"BMI VALUES"<<endl;
    cout<<"Underweight:\t"<<"less than 18.5"<<endl;
    cout<<"Normal:\t\t"<<"between 18.5 and 24.9"<<endl;
    cout<<"Overweight:\t"<<"between 25 and 29.9"<<endl;
    cout<<"Obese:\t\t"<<"30 or greater"<<endl;

    return 0;
}
