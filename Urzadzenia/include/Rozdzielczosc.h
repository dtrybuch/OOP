#pragma once
#include <iostream>

/*Klasa Rozdzielczosc
* definiuje dwuwymiarowa rozdzielczosc : szerokosc oraz wysokosc
*/
class Rozdzielczosc{
public:
    Rozdzielczosc(int x,int y);
    friend std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt);
protected:
    int m_x;
    int m_y; 
};


std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt);