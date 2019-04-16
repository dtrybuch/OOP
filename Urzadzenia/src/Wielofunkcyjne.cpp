#include "Wielofunkcyjne.h"

Wielofunkcyjne::Wielofunkcyjne(Rozdzielczosc roz1, Rozdzielczosc roz2)
    :Drukarka(roz1),Skaner(roz2),m_nazwa("Wielofunkcyjne"){}

std::string Wielofunkcyjne::rodzaj() const
{
    return m_nazwa;
}
