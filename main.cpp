#include <iostream>
#include <vector>
#include <string>

#include "Box.hpp"
#include "Sphere.hpp"

void report(Geometry* obj)
{
    std::cout << "---Geometry Report---" << std::endl;
    std::cout << "Type---------: " << obj->getType() << std::endl;
    std::cout << "Name---------: " << obj->getName() << std::endl;
    std::cout << "Volume-------: " << obj->getVolume() << std::endl;
    std::cout << "Surface Area-: " << obj->getSurface() << std::endl;
}

int main()
{
    std::vector<Geometry*> items;

    items.push_back(new Box("Box 1", 1, 2, 3));
    items.push_back(new Box("Box 2", 2, 3, 4));
    items.push_back(new Sphere("Sphere 1", 5));
    items.push_back(new Sphere("Sphere 2", 6));

    for(auto item : items)
    {
        report(item);
    }

    return 0;
}