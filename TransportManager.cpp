#include "TransportManager.h"

TransportManager::TransportManager(Type type, std::string start, std::string end, int volume) {
    GenerateOrder(type, start, end, volume);
}

void TransportManager::GenerateOrder(Type type, std::string start, std::string end, int volume)
{
    Order ord(type, start, end, volume);
    auto track = ord.best(start, end, type, volume);
    track.toString();
}