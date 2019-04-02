#include"Sofa.h"

Sofa::Sofa(int s,int w , int d, int siedz):Mebel(s,w,d), m_siedzisko(siedz){}


std::ostream& Sofa::print(std::ostream &ekran) const
{
    ekran<<"Sofa: sz:"<<m_dlugosc<<" wys:"<<m_wysokosc<<" dl:"<<m_dlugosc<<" siedzisko:"<<m_siedzisko;
    return ekran; 
}
Sofa::~Sofa()
{
    std::cout<<"~Sofa"<<std::endl;
}