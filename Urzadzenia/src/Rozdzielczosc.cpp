#include "Rozdzielczosc.h"

Rozdzielczosc::Rozdzielczosc(int x, int y) 
    : m_x(x),m_y(y){}

std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt)
{
    ekran<<obiekt.m_x<<"x"<<obiekt.m_y;
    return ekran;
}