#include"Kanapa.h"

Kanapa::Kanapa(int sz, int wys, int dl,int siedz,int spanie):Mebel(sz,wys,dl),Sofa(sz,wys,dl,siedz),Lozko(sz,wys,dl,spanie){}

std::ostream & Kanapa::print(std::ostream& ekran) const
{
    ekran<<"jako ";  
    Mebel::print(ekran);
    ekran<<std::endl;
    ekran<<"jako "; 
    Sofa::print(ekran);
    ekran<<std::endl;
    ekran<<"jako ";
    Lozko::print(ekran);
    return ekran;
}
Kanapa::~Kanapa()
{
    std::cout<<"~Kanapa"<<std::endl;
}

