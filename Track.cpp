#include "Track.h"
#include <iostream>

Track::Track()
{
	this->cost = 0;
	this->time = 0;
	this->volume = 0;
}

Track::~Track()
{

}

Track::Track(std::vector<Transport> vec, int volume)
{
	for (auto v : vec) {
		cost = v.sumCost(volume, v.getDistance());
		time = v.sumTime(v.getDistance());
	}
}

double Track::getCost()
{
	return this->cost;
}

void Track::toString() {
	std::cout << "Track generated. Cost: " << cost << "\tTime: " << time << "\tVolume: " << volume << std::endl;
}