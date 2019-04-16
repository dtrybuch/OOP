#include "Skaner.h"

Skaner::Skaner(Rozdzielczosc roz):m_roz(roz),m_nazwa("Skaner"){}

std::string Skaner::rodzaj() const
{
    return m_nazwa;
}

Rozdzielczosc Skaner::rozdzielczosc() const
{
    return m_roz;
}