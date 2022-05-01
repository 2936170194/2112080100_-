/*
 FileName:T6_.26cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <iomanip>

using namespace std;

float celsius(float a);

float fahrenheit(float a);

int main ()
{
    float a;
    cout<<"摄氏度"<<"\t"<<"华氏度"<<"\t"<<"\t"<<"摄氏度"<<"\t"<<"华氏度"<<"\t"<<"\t"<<"摄氏度"<<"\t"<<"华氏度"<<endl;
    for(int i=0; i<=100; i=i+3)
    {
        if(i==99)
        {
            cout<<i<<"\t"<<fixed<<setprecision(2)<<fahrenheit(i)<<"\t"<<"\t";
            cout<<i+1<<"\t"<<fixed<<setprecision(2)<<fahrenheit(i+1)<<endl;;
        }

        else
        {
            cout<<i<<"\t"<<fixed<<setprecision(2)<<fahrenheit(i)<<"\t"<<"\t";
            cout<<i+1<<"\t"<<fixed<<setprecision(2)<<fahrenheit(i+1)<<"\t"<<"\t";
            cout<<i+2<<"\t"<<fixed<<setprecision(2)<<fahrenheit(i+2)<<endl;
        }

    }
    cout<<endl<<endl;
    float b;
    cout<<"华氏度"<<"\t"<<"摄氏度"<<"\t"<<"\t"<<"华氏度"<<"\t"<<"摄氏度"<<"\t"<<"\t"<<"华氏度"<<"\t"<<"摄氏度"<<endl;
    for(int i=32; i<=212; i=i+3)
    {
        if(i==212)
            cout<<i<<"\t"<<fixed<<setprecision(2)<<celsius(i)<<endl;
        else
        {
            cout<<i<<"\t"<<fixed<<setprecision(2)<<celsius(i)<<"\t"<<"\t";
            cout<<i+1<<"\t"<<fixed<<setprecision(2)<<celsius(i+1)<<"\t"<<"\t";
            cout<<i+2<<"\t"<<fixed<<setprecision(2)<<celsius(i+2)<<endl;
        }

    }


    return 0;
}
float celsius(float a)
{
    return ((a-32)/1.8);
}
float fahrenheit(float a)
{
    return (1.8*a+32);

}

