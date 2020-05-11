#include "keep.h"
#include "car.h"
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
#include "menu.h"
#include "VAZ.h"
#include "KIA.h"
#include "Nissan.h"
#include "Toyota.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	Keeper<VAZ> vaz;
	Keeper<KIA> kia;
	Keeper<Nissan> nis;
	Keeper<Toyota> toy;

	int button;
	bool flag = true;
	while (flag) {
		system("cls");
		cout << "Выберите персонажа: " << endl << endl;
		cout << "1 - ВАЗ" << endl;
		cout << "2 - KIA" << endl;
		cout << "3 - Nissan" << endl;
		cout << "4 - Toyota" << endl;
		cout << "0 - Выход из программы" << endl << endl;
		cout << "Введите соответствующую цифру: ";
		cin >> button;
		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}

		switch (button) {
		case 1: carsmenu(vaz, "C://Users//golub/source/repos/course/course//VAZ.txt"); break;
		case 2: carsmenu(kia, "C://Users//golub/source/repos/course/course//KIA.txt"); break;
		case 3: carsmenu(nis, "C://Users//golub/source/repos/course/course//Nissan.txt"); break;
		case 4: carsmenu(toy, "C://Users//golub/source/repos/course/course//Toyota.txt"); break;
		case 0: flag = false; break;
		default: cout << endl << "Ошибка, попробуйте ввести еше раз!" << endl << endl; system("pause"); break;
		}
	}
	return 0;
}
