/*
 FileName:T6_.21cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;
int iseven(int a);

int main ()
{
    int c[6];
    for(int i=1;i<=5;i++)
    {
            cin>>c[i];
    }
    for(int i=1;i<=5;i++)
    {
        if(iseven(c[i]))
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;

    }

    return 0;
}
int iseven(int a)
{
    if(a%2==0)
        return true;
    else
        return false;
}
