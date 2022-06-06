#include "Train.h"

Train::Train()
{
	this->Price = 200;
	this->Speed = 100;
	this->Volume = 500;
	this->distance = 0;
}

Train::Train(std::tuple<int, int, double> tuple, int dist)
{
	Transport(tuple, dist);
}

Train::~Train()
{

}

