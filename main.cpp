#include <iostream>
#include "MyString.h"
using namespace std;
int main() {
	MyString s, t;
	cout << "Nhap xau dau tien: "; cin >> s;
	cout << "Nhap xau thu hai: "; cin >> t;
	cout << "Xau dau tien: "; cout << s << '\n';
	cout << "Chieu dai xau dau tien: "; cout << s.length() << '\n';
	cout << "Xau con vi tri 2 den vi tri 5: "; cout << s.subString(1, 3) << '\n';
	cout << "Xau thu nhat + Xau thu hai: "; cout << s + t << '\n';
	cout << "Xoa 2 ki tu bat dau tu vi tri 0: "; cout << s.erase(0, 2) << '\n';
	cout << "Chen ki tu ! vao vi tri 1: "; cout << s.insert(1, "!") << '\n';
	cout << "Thay the 2 ki tu bat dau tu vi tri 0: "; cout << s.replace(0, 2, "abc") << '\n';
	cout << "Ket qua tim kiem xau con ll bat dau tu vi tri 0: " << (s.find(0, "ll") ? "True" : "False") << '\n';
	return 0;
}
