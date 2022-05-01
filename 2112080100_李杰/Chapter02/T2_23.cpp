/*
 FileName:T2_23.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 11,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int a,b,c,d,e,max,min;
    cin>>a>>b>>c>>d>>e;
    if(a>=b&&a>=c&&a>=d&&a>=e)
    max=a;
    if(b>=a&&b>=c&&b>=d&&b>=e)
    max=b;
    if(c>=a&&c>=b&&c>=d&&c>=e)
    max=c;
    if(d>=a&&d>=b&&d>=c&&d>=e)
    max=d;
    if(e>=a&&e>=b&&e>=c&&e>=d)
    max=e;
    if(a<=b&&a<=c&&a<=d&&a<=e)
    min=a;
    if(b<=a&&b<=c&&b<=d&&b<=e)
    min=b;
    if(c<=a&&c<=b&&c<=d&&c<=e)
    min=c;
    if(d<=a&&d<=b&&d<=c&&d<=e)
    min=d;
    if(e<=a&&e<=b&&e<=c&&e<=d)
    min=e;
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;
    return 0;
}
