#ifndef ABSTRACT_GEOMETRY_BOX_HPP
#define ABSTRACT_GEOMETRY_BOX_HPP

#include "Geometry.hpp"

class Box : public Geometry
{
public:
    Box(std::string name, unsigned int length, unsigned int width, unsigned int height):
            m_name(name),
            m_length(length),
            m_width(width),
            m_height(height),
            m_type("Box")
            {}
    virtual std::string getName() override { return m_name; }
    virtual std::string getType() override { return m_type; }

    virtual unsigned int computeVolume() override;
    virtual unsigned int computeSurface() override;

private:
    unsigned int m_length;
    unsigned int m_width;
    unsigned int m_height;
};

#endif //ABSTRACT_GEOMETRY_BOX_HPP
