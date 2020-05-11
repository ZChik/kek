#pragma once
#include "keep.h"

class car {
public:
	car();
	virtual ~car();
	virtual void set() = 0;
};