#pragma once
#include <iostream>
#include <vector>
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
using namespace std;
class passenger
{
public:
	vector<color> vc;
	vector<type> vet;
	vector<volume> vv;
	vector<lenght> vl;
	vector<weight> vw;
	vector<height> vh;
	vector<year> vy;
	vector<door> vd;
	vector<model> vm;
	vector<tires> vti;
	vector<trunk> vtr;
	vector<roof> vr;
	vector<mirror> vmi;
	vector<seat> vs;
	vector<akpp> va;
	void info() {
		int i;
		for (i = 0; i < vc.size(); ++i) vc[i].set();
		for (i = 0; i < vet.size(); ++i) vet[i].set();
		for (i = 0; i < vv.size(); ++i) vv[i].set();
		for (i = 0; i < vl.size(); ++i) vl[i].set();
		for (i = 0; i < vw.size(); ++i) vw[i].set();
		for (i = 0; i < vh.size(); ++i) vh[i].set();
		for (i = 0; i < vy.size(); ++i) vy[i].set();
		for (i = 0; i < vd.size(); ++i) vd[i].set();
		for (i = 0; i < vm.size(); ++i) vm[i].set();
		for (i = 0; i < vti.size(); ++i) vti[i].set();
		for (i = 0; i < vtr.size(); ++i) vtr[i].set();
		for (i = 0; i < vr.size(); ++i) vr[i].set();
		for (i = 0; i < vmi.size(); ++i) vmi[i].set();
		for (i = 0; i < vs.size(); ++i) vs[i].set();
		for (i = 0; i < va.size(); ++i) va[i].set();
	}
};