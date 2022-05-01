/*
 FileName:T6_.23cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

void f(int side,char fillCharacter);

int main ()
{
    int a;
    char b;
    cin>>a>>b;
    f(a,b);
    return 0;
}


void f(int side,char fillCharacter)
{
    for(int j=1; j<=side; j++)
    {
        for(int i=1; i<=side; i++)
        {
            cout<<fillCharacter;
            if(i==side)
                cout<<endl;
        }
    }
}
