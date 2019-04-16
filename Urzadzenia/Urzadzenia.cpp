#include "Urzadzenia.h"

Rozdzielczosc::Rozdzielczosc(int x, int y) 
    : m_x(x),m_y(y){}



Drukarka::Drukarka(Rozdzielczosc roz):m_roz(roz),m_nazwa("Drukarka"){}

std::string Drukarka::rodzaj() const
{
    return m_nazwa;
}

Rozdzielczosc Drukarka::rozdzielczosc() const
{
    return m_roz;
}

Skaner::Skaner(Rozdzielczosc roz):m_roz(roz),m_nazwa("Skaner"){}

std::string Skaner::rodzaj() const
{
    return m_nazwa;
}

Rozdzielczosc Skaner::rozdzielczosc() const
{
    return m_roz;
}

Wielofunkcyjne::Wielofunkcyjne(Rozdzielczosc roz1, Rozdzielczosc roz2)
    :Drukarka(roz1),Skaner(roz2),m_nazwa("Wielofunkcyjne"){}

std::string Wielofunkcyjne::rodzaj() const
{
    return m_nazwa;
}

std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt)
{
    ekran<<obiekt.m_x<<"x"<<obiekt.m_y;
    return ekran;
}