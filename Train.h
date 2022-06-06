#pragma once
#include <tuple>
#include "Transport.h"

class Train : public Transport
{
public:
	Train();
	Train(std::tuple<int, int, double>, int);
	~Train();
};