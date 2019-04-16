#include "Drukarka.h"

Drukarka::Drukarka(Rozdzielczosc roz):m_roz(roz),m_nazwa("Drukarka"){}

std::string Drukarka::rodzaj() const
{
    return m_nazwa;
}

Rozdzielczosc Drukarka::rozdzielczosc() const
{
    return m_roz;
}
