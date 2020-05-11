#pragma once
#include <iostream>
#include "passengerbuilder.h"
class Nissan : public passengerBuilder
{
public:
	void createCar() { p = new passenger; }
	void buildcolor() { p->vc.push_back(color()); }
	void buildenginetype() { p->vet.push_back(type()); }
	void buildenginevolume() { p->vv.push_back(volume()); }
	void buildlenght() { p->vl.push_back(lenght()); }
	void buildweight() { p->vw.push_back(weight()); }
	void buildheight() { p->vh.push_back(height()); }
	void buildyear() { p->vy.push_back(year()); }
	void builddoor() { p->vd.push_back(door()); }
	void buildmodel() { p->vm.push_back(model()); }
	void buildtires() { p->vti.push_back(tires()); }
	void buildtrunk() { p->vtr.push_back(trunk()); }
	void buildseat() { p->vs.push_back(seat()); }
};