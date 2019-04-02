#pragma once
#include<iostream>
#include"Mebel.h"

class Lozko: virtual public Mebel{
protected:
    int m_spanie;
public:
    Lozko(int s,int w , int d, int spanie);
    std::ostream& print(std::ostream &ekran) const;
    ~Lozko();
};