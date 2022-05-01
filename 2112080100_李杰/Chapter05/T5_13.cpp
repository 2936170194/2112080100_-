/*
 FileName:T5_13.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

using namespace std;

int main ()
{
    int n[5],i,j;
    for(j=0; j<5; j++)
    {
        cin>>n[j];
    }
    for(j=0;j<5;j++)
    {
        for(i=0; i<n[j]; i++)
        {
            cout<<"*";
            if(i==n[j]-1)
                cout<<endl;
        }
    }


    return 0;
}
