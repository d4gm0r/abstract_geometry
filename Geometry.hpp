#ifndef ABSTRACT_GEOMETRY_GEOMETRY_HPP
#define ABSTRACT_GEOMETRY_GEOMETRY_HPP

#include <string>

class Geometry {
public:
    Geometry(std::string name, std::string type) :
            m_name(name),
            m_type(type)
    {
    }

    std::string getName() { return m_name; }
    std::string getType() { return m_type; }
    virtual double computeVolume() = 0;
    virtual double computeSurface() = 0;

protected:
    std::string m_name;
    std::string m_type;
};

#endif //ABSTRACT_GEOMETRY_GEOMETRY_HPP
