/*
 FileName:T4_32.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
 #include <iostream>

using namespace std;

int main ()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

    return 0;
}
