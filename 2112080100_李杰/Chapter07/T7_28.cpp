/*
 FileName:T7_28.cpp
 Author:lijie
 E-mail:2936170194@qq.com
 Time:April 30,2022
 */
#include <iostream>
#include <string>
using namespace std;

bool isPalindrom(string str);
int main() {
	string str;
	cin >> str;
	if(isPalindrom(str)) {
	cout << "true" << endl;
	}else{
	cout << "false" << endl;
	}
}

bool isPalindrom(string str) {
	int len = str.length();
	if(str.length() < 2) {
		return true;
	}else {
		return str[0] == str[len - 1] && isPalindrom(str.substr(1, len -2));
	}
}
