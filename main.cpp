#include <iostream>
#include <vector>
#include <string>

#include "Box.hpp"
#include "Sphere.hpp"

int main() {
    std::vector<Geometry*> items;

    items.push_back(new Box("Box 1", 1, 2, 3));
    items.push_back(new Box("Box 2", 2, 3, 4));
    items.push_back(new Sphere("Sphere 1", 5));
    items.push_back(new Sphere("Sphere 2", 6));

    return 0;
}