#include "MyString.h"

using namespace std;
int main() {
	MyString s, t;
	cout << "Nhap xau dau tien: "; cin >> s;
	cout << "Nhap xau thu hai: "; cin >> t;
	cout << "Xau dau tien: "; cout << s << '\n';
	cout << "Chieu dai xau dau tien: "; cout << s.length() << '\n';
	cout << "Xau con vi tri 2 den vi tri 5: "; cout << s.subString(2, 3) << '\n';
	cout << "Xau thu nhat + Xau thu hai: "; cout << s + t << '\n';
	char insertStr[] = "!"; 
	cout << "Chen ki tu ! vao vi tri 1: "; cout << s.insert(3, insertStr) << '\n';
	return 0;
}