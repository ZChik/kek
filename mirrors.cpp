#include <iostream>
#include "mirrors.h"
using namespace std;
mirror::mirror() {
	mir = "NoP";
}
mirror::~mirror() {}
mirror::mirror(const mirror & other)
{
	*this = other;
}
void mirror::set() {
	cin >> *this;
}
mirror & mirror::operator=(const mirror & other) {
	this->mir = other.mir;
	return *this;
}
ofstream & operator<<(ofstream & fout, mirror & obj) {
	fout << obj.mir << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, mirror & obj) {
	fin >> obj.mir;
	return fin;
}
ostream & operator<<(ostream & out, mirror & obj) {
	out << "Возможен ли подогрев зеркал заднего вида: " << obj.mir << endl;
	return out;
}
istream & operator>>(istream & in, mirror & obj) {
	while (1) {
		cout << "Возможен ли подогрев зеркал заднего вида (Да/Нет): ";
		getline(cin, obj.mir);
		if (cin.fail() || obj.mir != "Да" || obj.mir != "Нет" || obj.mir != "да" || obj.mir != "нет") {
			cout << "Ошибка, повторите ввод еще раз" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
	}
	return in;
}