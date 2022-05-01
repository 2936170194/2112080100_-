/*
 FileName:T5_19.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

#include <math.h>

#include <iomanip>

using namespace std;

int main ()
{
    double pi=0;
    int i,n;
    for(n=1;n<=1000;n++)
    {
        for(i=1; i<=n; i++)
        {
            pi=pow((-1),i-1)*4/(2*i-1)+pi;

        }
        cout<<n<<"\t"<<fixed<<setprecision(10)<<pi<<endl;
        pi=0;

    }


    return 0;
}
