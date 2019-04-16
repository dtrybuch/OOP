#pragma once
#include<iostream>

class Rozdzielczosc{
public:
    Rozdzielczosc(int x,int y);
    friend std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt);
protected:
    int m_x;
    int m_y; 
};
class Urzadzenie{
public:
    virtual std::string rodzaj() const = 0;
    virtual ~Urzadzenie(){}
protected:
    std::string m_nazwa;
};

class Papierozerne: virtual public Urzadzenie{
public:
    virtual std::string rodzaj() const  = 0;
    virtual ~Papierozerne(){}
protected:

};

class Drukarka:virtual public Papierozerne{
public:
    Drukarka(Rozdzielczosc roz);
    std::string rodzaj() const ;
    Rozdzielczosc rozdzielczosc() const;
    virtual ~Drukarka(){}
protected:
    Rozdzielczosc m_roz;
    std::string m_nazwa;
};

class Ksero: virtual public Papierozerne{
public:
    std::string rodzaj() const{}
    virtual ~Ksero(){}
protected:
    
};

class Skaner: virtual public Urzadzenie{
public:
    Skaner(Rozdzielczosc roz);
    std::string rodzaj() const;
    Rozdzielczosc rozdzielczosc() const ;
    virtual ~Skaner(){}
protected:
    Rozdzielczosc m_roz;
    std::string m_nazwa;
};

class Wielofunkcyjne: public Drukarka, public Ksero, public Skaner{
public:
    Wielofunkcyjne(Rozdzielczosc roz1, Rozdzielczosc roz2);
    std::string rodzaj() const;
    ~Wielofunkcyjne(){}
protected:
    std::string m_nazwa;
};

std::ostream & operator<<(std::ostream & ekran,const Rozdzielczosc obiekt);