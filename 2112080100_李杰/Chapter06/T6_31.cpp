/*
 FileName:T6_.31cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

#include <math.h>

using namespace std;

int gcd(int a,int b);

int main ()
{
    int a,b,x,y;
    cin>>a>>b;
    x=max(a,b);
    y=min(a,b);
    cout<<gcd(x,y);
    return 0;
}
int gcd(int a,int b)
{
    int y=1;
    for(int i=1;y!=0; i++)
    {

        y=a%b;
        a=b;
        b=y;
    }
    return a;


}
