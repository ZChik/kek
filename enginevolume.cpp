#include <iostream>
#include "enginevolume.h"
using namespace std;
volume::volume() {
	vol = 0;
}
volume::~volume() {}
volume::volume(const volume & other)
{
	*this = other;
}
void volume::set() {
	cin >> *this;
}
volume & volume::operator=(const volume & other) {
	this->vol = other.vol;
	return *this;
}
ofstream & operator<<(ofstream & fout, volume & obj) {
	fout << obj.vol << " ";
	return fout;
}
ifstream & operator>>(ifstream & fin, volume & obj) {
	fin >> obj.vol;
	return fin;
}
ostream & operator<<(ostream & out, volume & obj) {
	out << "����� ���������: " << obj.vol << endl;
	return out;
}
istream & operator>>(istream & in, volume & obj) {
	while (1) {
		cout << "������� ����� ���������: ";
		cin >> obj.vol;
		if (cin.fail() || obj.vol <= 0) {
			cout << "������, ��������� ���� ��� ���!" << endl;
				cin.clear();
				cin.ignore(10000, '\n');
				continue;
		}
	}
	return in;
}