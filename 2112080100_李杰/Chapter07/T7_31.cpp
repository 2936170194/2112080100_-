/*
 FileName:T7_31.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 30,2022
 */
#include<iostream>
using namespace std;

void stringReverse(string a,int len)
{
	cout << a[len - 1];
	if (0 == len - 1)return;
	return stringReverse(a, len - 1);
}

int main()
{
	string A = "abcdef";
	int len = 6;
	stringReverse(A, len);
	return 0;
}
