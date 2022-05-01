/*
 FileName:T6_.32cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

using namespace std;

int qualityPoints(int a);

int main ()
{
    int a;
    cin>>a;
    cout<<qualityPoints(a)<<endl;
    return 0;
}
int qualityPoints(int a)
{
if(a<=100&&a>=90) return 4;
if(a<=89&&a>=80) return 3;
if(a<=79&&a>=70) return 2;
if(a<=69&&a>=60) return 1;
if(a<60) return 0;
}
