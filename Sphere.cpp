#include "Sphere.hpp"

double Sphere::computeVolume()
{
    double volume = (4 * 3.1415926535897 * m_radius * m_radius * m_radius) / 3;

    return volume;
}

double Sphere::computeSurface()
{
    double surface = 4 * 3.1415926535897 * m_radius * m_radius;

    return surface;
}