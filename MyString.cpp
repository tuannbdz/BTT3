#include "MyString.h"

int MyString::length() {
	return n;
}

char* MyString::subString(int pos, int num) {
	char* sub = new char[num + 1];
	for (int i = 0; i < num; i++) {
		sub[i] = c[pos + i];
	}
	sub[num] = '\0';
	return sub;
}