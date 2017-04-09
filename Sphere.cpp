#include <math.h>
#include "Sphere.hpp"

void Sphere::computeVolume()
{
    m_volume = (4/3) * M_PI * m_radius.pow(3);
}

void Sphere::computeSurface()
{
    m_surface = 4 * M_PI * m_radius * m_radius;
}