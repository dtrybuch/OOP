#pragma once
#include<iostream>
class Mebel{
protected:
    int m_dlugosc, m_szerokosc, m_wysokosc;
public:
    Mebel(int d, int w, int s);
    virtual std::ostream & print(std::ostream& ekran) const;
    virtual ~Mebel();
};

std::ostream &operator<<(std::ostream &ekran,const Mebel & obiekt);
