/*
 FileName:T6_.20cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

using namespace std;

int multiple(int a,int b);

int main ()
{
    int a,b;
    int c[6][3];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=2;j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=1;i<=5;i++)
    {
    a=c[i][1];
    b=c[i][2];
    if(multiple(a,b))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    }
    return 0;
}
int multiple(int a,int b)
{
if(b%a==0)
return true;
else
return false;
}
