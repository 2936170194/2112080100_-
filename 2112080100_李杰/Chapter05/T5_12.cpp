/*
 FileName:T5_12.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int i,j,k;
    for(i=1; i<=10; i++)
    {

        for(j=0; j<i; j++)
        {
            cout<<"*";
        }
        for(k=0; k<10-i; k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(i=0; i<10; i++)
    {
        for(j=0; j<10-i; j++)
        {
            cout<<"*";
        }
        for(k=0; k<i; k++)
        {
            cout<<" ";
        }


        cout<<endl;
    }
    cout<<endl;
    for(i=0; i<10; i++)
    {
        for(k=0; k<i; k++)
        {
            cout<<" ";
        }
        for(j=0; j<10-i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
    cout<<endl;
    for(i=1; i<=10; i++)
    {
        for(k=0; k<10-i; k++)
        {
            cout<<" ";
        }
        for(j=0; j<i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
