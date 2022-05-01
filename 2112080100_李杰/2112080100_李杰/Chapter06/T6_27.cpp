/*
 FileName:T6_.27cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

using namespace std;

double min(double a,double b,double c);

int main ()
{
    double a,b,c,mi;
    cin>>a>>b>>c;
    mi=min(a,b,c);
    cout<<mi<<endl;



    return 0;
}
double min(double a,double b,double c)
{

    double min;
    if(a<=b)
    {
        if(a<c)
            min=a;
        else
            min=c;
    }
    if(b<a)
    {
        if(c<b)
            min=c;
        else
            min=b;
    }
    return min;

}
