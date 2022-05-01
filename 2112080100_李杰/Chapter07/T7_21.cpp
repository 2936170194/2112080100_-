/*
 FileName:T7_21.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 30,2022
 */
#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int x=4;
    const int y=5;
    array<array<int,y>,x>arr;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\t"<<"1"<<"\t"<<"2"<<"\t"<<"3"<<"\t"<<"4"<<"\t"<<"5"<<endl;
for(int i=0;i<4;i++){
        int sum=0;
        cout<<(i+1)<<"\t";
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<"\t";
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
cout<<"\t";
for(int i=0;i<5;i++){
        int sum=0;
    for(int j=0;j<4;j++){
        sum+=arr[j][i];
    }
cout<<sum<<"\t";
}
    return 0;
}
