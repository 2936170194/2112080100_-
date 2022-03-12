/*
 FileName:T2_19.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:Mar 11,2022
 */
 #include <iostream>

 #include <algorithm>

using namespace std;

int main ()
{
    int a,b,c,Sum,Product,Smallest,Largest;
    cout<<"Input three different integers: ";
    cin>>a>>b>>c;
    Sum=a+b+c;
    float Average=(float)Sum/3;
    Product=a*b*c;
    Largest=max({a,b,c});
    Smallest=min({a,b,c});
    cout<<"Sum is "<<Sum<<endl;
    cout<<"Average is "<<Average<<endl;
    cout<<"Product is "<<Product<<endl;
    cout<<"Smallest is "<<Smallest<<endl;
    cout<<"Largest is "<<Largest<<endl;

    return 0;
}
