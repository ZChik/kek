#pragma once
#include "passenger.h"
#include "passengerbuilder.h"
class Director
{
public:
	passenger* createpassenger(passengerBuilder & builder)
	{
		builder.createCar();
		builder.buildcolor();
		builder.buildenginetype();
		builder.buildenginevolume();
		builder.buildlenght();
		builder.buildweight();
		builder.buildheight();
		builder.buildyear();
		builder.builddoors();
		builder.buildmodel();
		builder.buildtires();
		builder.buildtrunk();
		builder.buildroof();
		builder.buildmirror();
		builder.buildseat();
		builder.buildakpp();
		return (builder.getpassenger());
	}
};