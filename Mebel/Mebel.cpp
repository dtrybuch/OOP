#include"Mebel.h"

Mebel::Mebel(int s, int w, int d):m_dlugosc(d),m_szerokosc(s),m_wysokosc(w){}

std::ostream & Mebel::print(std::ostream& ekran) const
{
    ekran<<"Mebel: sz:"<<m_dlugosc<<" wys:"<<m_wysokosc<<" dl:"<<m_dlugosc;
    return ekran; 
}

Mebel::~Mebel()
{
    std::cout<<"~Mebel"<<std::endl;
}

std::ostream &operator<<(std::ostream &ekran,const Mebel & obiekt) 
{
    obiekt.print(ekran);
    return ekran;
}