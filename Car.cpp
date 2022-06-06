#include "Car.h"

Car::Car()
{
	this->Price = 100;
	this->Speed = 60;
	this->Volume = 50;
	this->distance = 0;
}

Car::Car(std::tuple<int, int, double> tuple, int dist)
{
	Transport(tuple, dist);
}

Car::~Car()
{

}
