/*
 FileName:T4_34.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int jiecheng (int n)
{
    int s=1,i=1;
    if(n>1)
    {
        while(i<=n)
        {
            s=s*i;
            i++;
        }
    }
    if(n==0||n==1)
        s=1;
    return s;
}

int main ()
{
    //a
    int n;
    cin>>n;
    cout<<jiecheng(n)<<endl;


    //b
    double e=0;
    int m,j=1;
    cout<<"enter precision : ";
    cin>>m;
    while(j<m)
    {
        e=1.0*1/jiecheng(j)+e;
        j++;
    }
    e++;
    cout<<e<<endl;



    //c
    double x,E=0;
    int z,k=1;
    cout<<"enter precision : ";
    cin>>z;
    cout<<"enter x :";
    cin>>x;
    while(k<z)
    {
        E=1.0*x/jiecheng(k)+E;
        k++;
    }
    E++;
    cout<<E;




    return 0;
}
