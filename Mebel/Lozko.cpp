#include"Lozko.h"

Lozko::Lozko(int s,int w , int d, int spanie):Mebel(s,w,d),m_spanie(spanie){}

std::ostream& Lozko::print(std::ostream &ekran) const
{
    ekran<<"Lozko: sz:"<<m_dlugosc<<" wys:"<<m_wysokosc<<" dl:"<<m_dlugosc<<" sz. spania:"<<m_spanie;
    return ekran; 
}
Lozko::~Lozko()
{
    std::cout<<"~Lozko"<<std::endl;
}