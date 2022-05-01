/*
 FileName:T6_.29cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

int f(int a);

int main ()
{
    int a;
    for(int j=2;j<=10000;j++)
    {
    if(f(j))
    cout<<j<<" ";
    if(j%100==0)
        cout<<endl;

    }

    return 0;
}
int f(int a)
{

    int i,b=1;
    for(i=2; i<sqrt(a) ;i++)
    {
    if(a%i==0)
    b=0;
    }
    if(b==1)
    return 1;
    else
    return 0;
}
