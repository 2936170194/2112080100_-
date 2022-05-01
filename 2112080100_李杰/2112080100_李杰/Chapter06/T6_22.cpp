/*
 FileName:T6_.22cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

void f(int side);

int main ()
{
    int a;
    cin>>a;
    f(a);
    return 0;
}


void f(int side)
{
    for(int j=1; j<=side; j++)
    {
        for(int i=1; i<=side; i++)
        {
            cout<<"*";
            if(i==side)
                cout<<endl;
        }
    }
}
