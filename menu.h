#pragma once
#include "keep.h"
#include"color.h"
#include"enginetype.h"
#include"enginevolume.h"
#include"lenght.h"
#include"weight.h"
#include "height.h"
#include "year.h"
#include "doors.h"
#include "model.h"
#include "tires.h"
#include "trunk.h"
#include "trunkonroof.h"
#include "mirrors.h"
#include "seat.h"
#include "akpp.h"
#include "VAZ.h"
#include "KIA.h"
#include "Nissan.h"
#include "Toyota.h"
#include <iostream>

using namespace std;

template <typename T>
void carsmenu(T &obj, string s) {
	int button;
	int id;
	bool flag = true;

	while (flag) {
		system("cls");
		cout << "�������� ��������: " << endl << endl;
		cout << "1 - �������� ����� �������" << endl;
		cout << "2 - ������� �������" << endl;
		cout << "3 - ������� ������ ��������� �� �����" << endl;
		cout << "4 - ������������� �������" << endl;
		cout << "5 - �������� �������� � ����" << endl;
		cout << "6 - ��������� �������� �� �����" << endl;
		cout << "0 - ��������� � ������� ����" << endl << endl;
		cout << "������� ��������������� �����: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		system("cls");
		switch (button) {
		case 1: obj.push(); system("pause"); break;
		case 2: obj.print(); cout << "�������� �������, ������� ������ �������: "; cin >> id; obj.del(id); system("pause"); break;
		case 3: obj.print(); system("pause"); break;
		case 4: obj.print(); cout << "�������� �������, ������� ������ �������������: "; cin >> id; obj.record(id); system("pause"); break;
		case 5: obj.writefile(s); system("pause"); break;
		case 6: obj.readfile(s); system("pause"); break;
		case 0: flag = false; break;
		default: cout << "������� ������� ������!" << endl << endl; system("pause"); break;
		}
	}
}
