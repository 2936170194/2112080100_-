/*
 FileName:T4_20.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 19,2022
 */
#include <iostream>

using namespace std;

int main ()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int studentCounter = 1;
    while(studentCounter<=10)
    {
        cout<<"Enter result(1=pass,2=fail):";
        int result=0;
        cin>>result;
        while(result!=1&&result!=2)
        {
            cout<<endl<<"error!!!  Enter result(1=pass,2=fail):";
            cin>>result;
        }
        if(result==1)
            passes=passes+1;
        else
            failures=failures+1;
        studentCounter=studentCounter+1;

    }
    cout<<"Passed "<<passes<<"\nFailed "<<failures<<endl;
    if(passes>8)
        cout<<"Bonus to instructor!"<<endl;

    return 0;
}
