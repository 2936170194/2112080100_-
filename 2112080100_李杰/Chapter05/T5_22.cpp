/*
 FileName:T5_22.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

using namespace std;

int main()
{
    int x,y,a,b,j=0,i=0,l=0,k=0;
    cin>>x>>y;
    if(!(x<5)&&!(y>=7)) l=1;
    else l=0;
    if(!(x<5||y>=7)) k=1;
    else k=0;
    if(j==k) cout<<"yes"<<endl;
    else cout<<"no";


    int g;
    cin>>a>>b>>g;
    if(!(a==b)||!(g!=5)) l=1;
    if(!((a==b)&&(g!=5))) k=1;
    if(j==k) cout<<"yes"<<endl;
    else cout<<"no";

    cin>>x>>y;
    if(!((x<=8)&&(y>4))) l=1;
    if(!(x<=8)||!(y>4)) k=1;
    if(j==k) cout<<"yes"<<endl;
    else cout<<"no";

    cin>>i>>j;
    if(!((i>4)||(j<=6))) l=1;
    if(!(i>4)&&!(j<=6)) k=1;
    if(j==k) cout<<"yes"<<endl;
    else cout<<"no";
    return 0;
}
