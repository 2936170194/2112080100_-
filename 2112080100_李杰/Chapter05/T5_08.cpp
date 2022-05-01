/*
 FileName:T5_8.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int n,i,a,min;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        if(i==1)
        min=a;
        else
        if(a<=min)
        min=a;
    }
    cout<<min<<endl;
    return 0;
}
