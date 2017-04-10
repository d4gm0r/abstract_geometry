#ifndef ABSTRACT_GEOMETRY_SPHERE_HPP
#define ABSTRACT_GEOMETRY_SPHERE_HPP

#include "Geometry.hpp"

class Sphere: public Geometry
{
public:
    Sphere(std::string name, unsigned int radius):
        Geometry(name, "Sphere"),
            //m_name(name),
            m_radius(radius)
            //m_type("Sphere")
    {
    }
    std::string getName() { return m_name; }
    std::string getType() { return m_type; }

    double computeVolume() override;
    double computeSurface() override;

private:
    unsigned int m_radius;
};

#endif //ABSTRACT_GEOMETRY_SPHERE_HPP
