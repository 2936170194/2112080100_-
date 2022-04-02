/*
 FileName:T4_28.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int i=1,j,k;
    while(i<=4)
    {
        j=1;
        while(j<=8)
        {
            cout<<"*";
            cout<<" ";
            j++;
        }
        cout<<endl;

        k=1;
        while(k<=8)
        {
            cout<<" ";
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;

    }

    return 0;
}
