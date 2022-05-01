/*
 FileName:T5_20.cpp
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
    int side1,side2,hypotenuse;

    for(side1=1;side1<=500;side1++)
    {
        for(side2=1;side2<=500;side2++)
        {
            for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
            {
            if(hypotenuse*hypotenuse==side1*side1+side2*side2)
            cout<<"side1: "<<side1<<"\t"<<"side2: "<<side2<<"\t"<<"hypotenuse: "<<hypotenuse<<endl;
            }
        }
    }


    return 0;
}
