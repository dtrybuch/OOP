#pragma once
#include<iostream>
#include"Mebel.h"
class Sofa: virtual public Mebel{
protected:
    int m_siedzisko;
public:
    Sofa(int s,int w , int d, int siedz);
    std::ostream& print(std::ostream &ekran) const;
    ~Sofa();
};