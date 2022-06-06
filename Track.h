#pragma once
#include "Car.h"
#include "Plane.h"
#include "Train.h"
#include <vector>

class Track
{
	double cost;
	double time;
	int volume;
public:
	Track();
	Track(std::vector<Transport>, int);
	double getCost();
	void toString();
	~Track();
};