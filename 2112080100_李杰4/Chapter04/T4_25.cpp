/*
 FileName:T4_25.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int a,j=2,i=1,k=2,l=1;
    cin>>a;
    while(i<=a)
    {
        cout<<"*";
        i++;
    }
    cout<<endl;
    while(k<a)
    {
        j=2;
        cout<<"*";
        while(j<a)
        {
            cout<<" ";
            j++;
        }
        cout<<"*"<<endl;
        k++;
    }
    while(l<=a)
    {
        cout<<"*";
        l++;
    }

    return 0;
}
