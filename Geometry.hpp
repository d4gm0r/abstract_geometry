#ifndef ABSTRACT_GEOMETRY_GEOMETRY_HPP
#define ABSTRACT_GEOMETRY_GEOMETRY_HPP

class Geometry
{
public:
    virtual std::string getName() { return m_name; }
    virtual std::string getType() { return m_type; }
    virtual void computeVolume() override;
    virtual void computeSurface() override;
    virtual getVolume() { return m_volume; }
    virtual getSurface() { return m_surface; }

protected:
    std::string m_name;
    std::string m_type;
    unsigned double m_volume;
    unsigned double m_surface;
};

#endif //ABSTRACT_GEOMETRY_GEOMETRY_HPP
