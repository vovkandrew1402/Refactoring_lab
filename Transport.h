#pragma once
#include <tuple>

class Transport
{
public:
	Transport();
	Transport(std::tuple<int, int, double>, int);
	~Transport();
	double sumCost(int, int);
	double sumTime(int);
	int getDistance();
protected:
	int Speed;
	int Volume;
	double Price;
	int distance;
};
