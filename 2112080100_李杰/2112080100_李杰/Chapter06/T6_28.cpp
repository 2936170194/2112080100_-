/*
 FileName:T6_.28cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

using namespace std;

int isperfect(int a);

int main ()
{
    int a;
    cin>>a;
    for(int j=1; j<=1000; j++)
    {
        if(isperfect(j))
        {
            cout<<j<<" ";
            for(int k=1; k<j; k++)
            {
                if(j%k==0)
                    cout<<k<<" ";
            }
            cout<<endl;
        }
    }
    if(isperfect(a))
        {
            cout<<a<<" ";
            for(int k=1; k<a; k++)
            {
                if(a%k==0)
                    cout<<k<<" ";
            }
            cout<<endl;
        }



    return 0;
}
int isperfect(int a)
{
    int sum=0;
    for(int i=1; i<a; i++)
    {
        if(a%i==0)
            sum=i+sum;
    }
    if(sum==a)
        return 1;
    else
        return 0;

}
