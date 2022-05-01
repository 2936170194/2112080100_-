/*
 FileName:T6_.40cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Apral 10,2022
 */
#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long);

int main ()
{
    for(unsigned int counter=0; counter<=10; ++counter)
        cout<<"fibonacci("<<counter<<")="<<fibonacci(counter)<<endl;

    cout<<"\nfibonacci(20)="<<fibonacci(20)<<endl;
    cout<<"\nfibonacci(30)="<<fibonacci(30)<<endl;
    cout<<"\nfibonacci(35)="<<fibonacci(35)<<endl;

}
unsigned long fibonacci(unsigned long number)
{
    if((0==number)||(1==number))
        return number;
    else
        return fibonacci(number-1)+fibonacci(number-2);


}
