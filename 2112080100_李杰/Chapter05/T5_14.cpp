/*
 FileName:T5_14.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 2,2022
 */
 #include <iostream>

using namespace std;

int main ()
{
    float n,s,sum=0;
    int i;
    for(;;)
    {
    cin>>i>>n;
    switch(i)
    {
    case 1 : s=2.98; break;
    case 2 : s=4.50; break;
    case 3 : s=9.98; break;
    case 4 : s=4.49; break;
    case 5 : s=6.87; break;
    default: cout<<sum<<endl;
    }
    sum=n*s+sum;
    if(6==i)
    return 0;

    }


    return 0;
}
