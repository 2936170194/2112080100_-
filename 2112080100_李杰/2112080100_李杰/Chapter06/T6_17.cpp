/*
 FileName:T6_.17cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 9,2022
 */
#include <iostream>

#include <random>

#include <ctime>

#include <iomanip>

using namespace std;

int main ()
{
    default_random_engine e(static_cast<int>(  time(0)  ) );

    uniform_int_distribution<int> a(2,10);
    int x;
    for(;;)
    {
        x=a(e);

        if(x%2==0)
        {
            cout<<x<<endl;
            break;
        }

    }


    uniform_int_distribution<int> b(3,11);
    for(;;)
    {
        x=b(e);
        if(x%2!=0)
        {
            cout<<x<<endl;
            break;
        }

    }

    uniform_int_distribution<int> c(6,22);
    for(;;)
    {
        x=c(e);
        if(x%4==2)
        {
            cout<<x<<endl;
            break;
        }

    }



    return 0;
}
