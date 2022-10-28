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
	char* insert(int, const char*);
	char* operator+(MyString&);
	friend istream& operator>>(istream&, MyString&);
	friend ostream& operator<<(ostream&, const MyString&);
};

