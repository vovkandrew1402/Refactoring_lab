#include "Transport.h"

Transport::Transport() {
	this->Price = 0;
	this->Speed = 0;
	this->Volume = 0;
	this->distance = 0;
}

Transport::Transport(std::tuple<int, int, double> tuple, int dist) {
	this->Price = std::get<0>(tuple);
	this->Speed = std::get<1>(tuple);
	this->Volume = std::get<2>(tuple);
	this->distance = dist;
}

Transport::~Transport() {}

double Transport::sumCost(int mass, int dist)
{
	return (mass / Volume) * sumTime(dist) * Price;
}

double Transport::sumTime(int dist)
{
	return dist / Speed;
}

int Transport::getDistance()
{
	return this->distance;
}