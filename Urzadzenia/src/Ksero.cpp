#include "Ksero.h"

Ksero::Ksero() : m_nazwa("Ksero") {}

std::string Ksero::rodzaj() const
{
    return m_nazwa;
}