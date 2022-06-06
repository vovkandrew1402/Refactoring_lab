#pragma once
#include <tuple>
#include "Transport.h"

class Car : public Transport
{
public:
	Car();
	Car(std::tuple<int, int, double>, int);
	~Car();
};

