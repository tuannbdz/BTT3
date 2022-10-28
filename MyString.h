#pragma once
#include <iostream>
using namespace std;
class MyString
{
	char* c;
	int n;
public:
	int length();
	char* subString(int, int);
	char* insert(int, char*);
	char* operator+(const MyString&);
	friend istream& operator>>(istream&, MyString&);
	friend ostream& operator<<(ostream&, const MyString&);
};

