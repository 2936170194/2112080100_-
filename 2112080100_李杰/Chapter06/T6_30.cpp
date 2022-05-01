/*
 FileName:T6_.30cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

#include <string>

using namespace std;

string f(string a);

int main ()
{
    string a;
    cin>>a;
    cout<<f(a);
    return 0;
}
string f(string a)
{
    int b;
    b=a.length();
    int temp;
    for(int i=0; i<b/2; i++)
    {
        temp=a[i];
        a[i]=a[b-i-1];
        a[b-i-1]=temp;
    }
        return a;
}
