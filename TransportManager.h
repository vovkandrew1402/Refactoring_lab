#pragma once
#include "Type.h"
#include "Order.h"

#include <string>

class TransportManager
{
public:
    TransportManager(Type type, std::string start, std::string end, int volume);
    void GenerateOrder(Type type, std::string start, std::string end, int volume);
};