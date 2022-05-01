/*
 FileName:T5_9.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

using namespace std;

int main ()
{
    int i,mul=1;
    for(i=1; i<=15; i++)
    {
        if(0!=i%2)
        mul=mul*i;
    }
    cout<<mul<<endl;
    return 0;
}
