/*
 FileName:T6_.16cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <random>

#include <ctime>

using namespace std;

int main ()
{
    default_random_engine e(static_cast<int>(  time(0)  ) );

    uniform_int_distribution<int> a(1,2);
    cout<<a(e)<<endl;

    uniform_int_distribution<int> b(1,100);
    cout<<b(e)<<endl;

    uniform_int_distribution<int> c(0,9);
    cout<<c(e)<<endl;

    uniform_int_distribution<int> d(1000,1112);
    cout<<d(e)<<endl;

    uniform_int_distribution<int> f(-1,1);
    cout<<f(e)<<endl;

    uniform_int_distribution<int> g(-3,11);
    cout<<g(e)<<endl;

    return 0;
}
