#include <math.h>
#include "Sphere.hpp"

double Sphere::computeVolume()
{
    //double volume = (4/3) * M_PI * m_radius.pow(3);
    double volume = (4/3) * 3.141592653 * m_radius * m_radius * m_radius;

    return volume;
}

double Sphere::computeSurface()
{
    //double surface = 4 * M_PI * m_radius * m_radius;
    double surface = 4 * 3.141592653 * m_radius * m_radius;

    return surface;
}