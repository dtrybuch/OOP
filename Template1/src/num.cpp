#include "num.h"

namespace num
{
    bool czyPierwsza(int liczba)
    {
        for(int i = 2;i < liczba; i++)
        {
            if(liczba % i == 0)
                return false;
        }
        return true;
    }
    std::string text(bool wynik)
    {
        if(wynik) return "TRUE";
        else return "FALSE";
    }
}