#include "Plane.h"

Plane::Plane()
{
	this->Price = 500;
	this->Speed = 300;
	this->Volume = 100;
	this->distance = 0;
}

Plane::Plane(std::tuple<int, int, double> tuple, int dist)
{
	Transport(tuple, dist);
}

Plane::~Plane()
{

}

