#include "Box.hpp"

void Box::computeVolume()
{
    m_volume = m_length * m_width * m_height;
}

void Box::computeSurface()
{
    m_surface = 2 * ((m_length * m_width) + (m_length * m_height) + (m_width * m_height));
}