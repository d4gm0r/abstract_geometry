#ifndef ABSTRACT_GEOMETRY_GEOMETRY_HPP
#define ABSTRACT_GEOMETRY_GEOMETRY_HPP

class Geometry
{
public:
    virtual std::string getName() { return m_name; }
    virtual std::string getType() { return m_type; }
    virtual unsigned int computeVolume();
    virtual unsigned int computeSurface();

protected:
    std::string m_name;
    std::string m_type;
};

#endif //ABSTRACT_GEOMETRY_GEOMETRY_HPP
