/*
 FileName:T5_18.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 # include <iostream>
#include <iomanip>
#include<bitset>

using namespace std;

int main ()
{
    int i;
    cout<<"10"<<setw(15)<<"2"<<setw(15)<<"8"<<setw(15)<<"16"<<endl;
    cout<<endl;
    for(i=1;i<=256;i++)
    {
      cout<<dec<<i<<setw(15)<<bitset<9>(i)<<setw(15)<<oct<<i<<setw(15)<<hex<<i<<endl;
    }



        return 0;
}
