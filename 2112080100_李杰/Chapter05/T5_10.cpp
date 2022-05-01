
/*
 FileName:T5_10.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

using namespace std;

int main ()
{
    int i,n,mul=1;
    for(n=1;n<=5;n++)
    {
    for(i=1;i<=n;i++)
    {
    mul=mul*i;
    }
    cout<<n<<"!\t"<<mul<<endl;
    mul=1;

    }
    return 0;
}
