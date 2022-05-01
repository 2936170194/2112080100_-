/*
 FileName:T4_17.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    int counter=0,number,largest;
    cin>>number;
    counter++;
    largest=number;
    while(counter<10)
    {
        cin>>number;
        counter++;
        if(number>largest)
            largest=number;

    }
    cout<<largest<<endl;



    return 0;
}
