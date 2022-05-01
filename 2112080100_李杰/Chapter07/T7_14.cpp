/*
 FileName:T7_14.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 30,2022
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    int b=20,c;
    for(int i=0;i<b;i++)
    {
        cin>>c;
        a.push_back(c);

    }
    a.erase(unique(a.begin(),a.end()),a.end());
    b=a.size();
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
