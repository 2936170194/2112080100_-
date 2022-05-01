/*
 FileName:T5_25.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 # include <iostream>

using namespace std;

int main ()
{
    unsigned int count;
    for(count=1; count<=10; ++count)
    {
        if(count!=5)
    cout<<count<<" ";

    if(count==5)
    count=11;

    }

    cout<<"\n broke out of loop at count = "<<count<<endl;
        return 0;
}
