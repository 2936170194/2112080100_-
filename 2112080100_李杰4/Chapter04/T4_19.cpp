/*
 FileName:T4_19.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int i=0,a[10],temp;
    while(i<10)
    {
        cin>>a[i];
        i++;
    }
    i=0;
    int j=1;
    while(j<=2)
    {

        while(i<9)
        {

            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            i++;
        }
        j++;
        i=0;
    }
    cout<<a[8]<<" "<<a[9]<<endl;



    return 0;
}
