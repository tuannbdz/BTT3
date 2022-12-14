#include "MyString.h"

int MyString::length() {
	return n;
}

char* MyString::insert(int pos, const char* strToInsert)
{
	if (pos > n || pos < 0)
	{
		return NULL;
	}

	int lenInsert = 0;

	while (strToInsert[lenInsert])
		++lenInsert;

	int len = lenInsert + n + 1;
	char* insertedStr = new char[len];

	for (int i = 0; i < pos; ++i)
		insertedStr[i] = this->c[i];

	for (int i = pos; i < pos + lenInsert; ++i)
		insertedStr[i] = strToInsert[i - pos];

	for (int i = pos + lenInsert; i < len - 1; ++i)
		insertedStr[i] = this->c[i - lenInsert];
	insertedStr[len - 1] = '\0';

	delete[] c;
	this->c = insertedStr;
	return c;
}

char* MyString::subString(int pos, int num) {
	if (pos >= n || pos < 0 || pos + num > n) return NULL;
	char* sub = new char[num + 1];
	for (int i = 0; i < num; i++) {
		sub[i] = c[pos + i];
	}
	sub[num] = '\0';
	return sub;
}

char* MyString::erase(int pos, int num) {
	if (pos >= n || pos < 0 || pos + num > n) return NULL;
	char* sub = new char[n - num + 1];
	for (int i = 0; i < pos - 1; i++) sub[i] = c[i];
	for (int i = 0; i < n - (pos + num - 1); i++)
	{
		sub[pos + i] = c[pos + num + i];
	}
	sub[n - num] = '\0';
	delete [] c;
	c = sub;
	return c;
}

char* MyString::replace(int pos, int num, const char* source) {
	int len = 0;
	while (source[len]) len++;
	if (pos >= n || pos < 0 || pos + num > n || num > len) return NULL;
	for (int i = 0; i < num; i++) {
		c[pos + i] = source[i];
	}
	return c;
}

int MyString::find(int pos, const char* source) {
	if (pos < 0 || pos >= n) return -1;
	int len = 0;
	while (source[len]) len++;
	for (int i = 0; i + len - 1 < n; i++) {
		bool fl = 1;
		for (int j = 0; j < len; j++) {
			if (c[i + j] != source[j]) {
				fl = 0;
				break;
			}
		}
		if (fl) return i;
	}
	return -1;
}

char* MyString::operator+(MyString& s) {
	char* dest;
	dest = new char[n + s.n + 1];
	for (int i = 0; i < n; i++)
		dest[i] = this->c[i];
	for (int i = 0; i < s.n; i++)
		dest[n + i] = s.c[i];
	dest[n + s.length()] = '\0';
	return dest;
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