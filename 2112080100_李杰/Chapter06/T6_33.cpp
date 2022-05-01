/*
 FileName:T6_.33cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

#include <random>

#include <cstdlib>

#include <ctime>

using namespace std;

//int flip();

bool flip();

int main ()
{
    int x=0,y=0;
    for(int i=1; i<=100; i++)
    {
        if(flip()==1)
            x++;
        else
            y++;
    }

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
bool flip()
{
    int n = rand();
    if(n%2) return true;
    else return false;
}


