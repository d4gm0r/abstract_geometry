#ifndef ABSTRACT_GEOMETRY_BOX_HPP
#define ABSTRACT_GEOMETRY_BOX_HPP

#include "Geometry.hpp"

class Box : public Geometry
{
public:
    Box(std::string name, unsigned int length, unsigned int width, unsigned int height) :
        Geometry(name, "Box"),
            m_length(length),
            m_width(width),
            m_height(height)
    {
    }
    std::string getName() { return m_name; }
    std::string getType() { return m_type; }

    double computeVolume() override;
    double computeSurface() override;

private:
    unsigned int m_length;
    unsigned int m_width;
    unsigned int m_height;
};

#endif //ABSTRACT_GEOMETRY_BOX_HPP
