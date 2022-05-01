/*
 FileName:T5_5.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int n,i,a,sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<sum<<endl;
    return 0;
}
