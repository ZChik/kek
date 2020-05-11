#pragma once
#include "passenger.h"
class passengerBuilder
{
protected:
	passenger* p;
public:
	passengerBuilder(): p(0) {}
	virtual ~passengerBuilder(){}
	virtual void createCar() {}
	virtual void buildcolor() {}
	virtual void buildenginetype() {}
	virtual void buildenginevolume() {}
	virtual void buildlenght() {}
	virtual void buildheight() {}
	virtual void buildweight() {}
	virtual void buildyear() {}
	virtual void builddoors() {}
	virtual void buildmodel() {}
	virtual void buildtires() {}
	virtual void buildtrunk() {}
	virtual void buildroof() {}
	virtual void buildmirror() {}
	virtual void buildseat() {}
	virtual void buildakpp() {}
	virtual passenger* getpassenger() { return p; }
};