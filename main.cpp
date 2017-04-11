#include <iostream>
#include <vector>

#include "Box.hpp"
#include "Sphere.hpp"

//
// Nathan Larsen - A01532780
// Assignment 8 - Abstract Geometry
//

void report(Geometry* obj)
{
    std::cout << "---Geometry Report---" << std::endl;
    std::cout << "Type---------: " << obj->getType() << std::endl;
    std::cout << "Name---------: " << obj->getName() << std::endl;
    std::cout << "Volume-------: " << obj->computeVolume() << std::endl;
    std::cout << "Surface Area-: " << obj->computeSurface() << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::vector<Geometry*> items;

    items.push_back(new Box("Box 1", 1, 2, 3));
    items.push_back(new Box("Box 2", 2, 3, 4));
    items.push_back(new Sphere("Sphere 1", 5));
    items.push_back(new Sphere("Sphere 2", 6));

    for (auto item : items)
    {
        report(item);
    }
    for (auto item : items) {
        delete item;
    }

    return 0;
}