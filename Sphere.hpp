#ifndef ABSTRACT_GEOMETRY_SPHERE_HPP
#define ABSTRACT_GEOMETRY_SPHERE_HPP

#include "Geometry.hpp"

class Sphere: public Geometry
{
public:
    Sphere(std::string name, unsigned int radius):
            m_name(name),
            m_radius(radius),
            m_type("Sphere")
    {}
    virtual std::string getName() override { return m_name; }
    virtual std::string getType() override { return m_type; }

    virtual unsigned int computeVolume() override;
    virtual unsigned int computeSurface() override;

private:
    unsigned int m_radius;
};

#endif //ABSTRACT_GEOMETRY_SPHERE_HPP
