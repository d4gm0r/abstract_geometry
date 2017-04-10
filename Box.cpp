#include "Box.hpp"

double Box::computeVolume()
{
    double volume = m_length * m_width * m_height;

    return volume;
}

double Box::computeSurface()
{
    double surface = 2 * ((m_length * m_width) + (m_length * m_height) + (m_width * m_height));

    return surface;
}