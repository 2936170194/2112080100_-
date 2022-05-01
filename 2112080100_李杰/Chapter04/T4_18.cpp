/*
 FileName:T4_18.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int N=1,i=1;
    cout<<"N\t"<<"10*N\t"<<"100*N\t"<<"1000*N\t"<<endl;
    cout<<endl;
    while(i<=5)
    {
    cout<<N<<"\t"<<10*N<<"\t"<<100*N<<"\t"<<1000*N<<"\t"<<endl;
    N=N+1;
    i++;
    }



    return 0;
}
