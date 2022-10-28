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

istream& operator>>(istream& in, MyString& s) {
	char buf[1024];
	in.getline(buf, sizeof(buf));
	int n = 0;
	while (buf[n])
		n++;
	s.n = n;
	s.c = new char[n];
	for (int i = 0; i < n; i++)
		s.c[i] = buf[i];
	return in;
}
ostream& operator<<(ostream& out, const MyString& s) {
	for (int i = 0; i < s.n; i++)
		out << s.c[i];
	return out;
}
