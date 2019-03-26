#pragma once
/*
    Klasa bazowa Logical ktora ma dwie funkcje statyczne eval pobierajace referencje do obiektu bedacego wyrazeniem logicznym ktory chcemy wykonac w zaleznosci
    czy jest to wyrazenie dwuargumentowe czy jednoargumentowe oraz zawiera dwie metody wirtualne result, ktore zwracaja wynik w zaleznosci od obiektu
    ktory jest na pierwszej pozycji w metodzie eval.
*/
class Logical{
protected:
public:
    static bool eval(const Logical& object, bool first, bool second);
    static bool eval(const Logical& object, bool first);
    virtual bool result(bool first, bool second) const;
    virtual bool result(bool first) const;
};
/*
    Klasa abstrakcyjna TwoArg ktora dziedziczy po klasie Logical i zawiera metode czysto wirtualna result
*/
class TwoArg: public Logical{
public:
    virtual bool result(bool first, bool second) const = 0;
};
/*
    Klasa OR ktora dziedziczy po klasie TwoArg i zawiera metode wirtualna result ktora zwraca wynik operacji logicznej OR
*/
class OR: public TwoArg{
public:
    bool result(bool first, bool second) const ;

};
/*
    Klasa AND ktora dziedziczy po klasie TwoArg i zawiera metode wirtualna result ktora zwraca wynik operacji logicznej AND
*/
class AND: public TwoArg{
public:
    bool result(bool first, bool second) const ;
};
/*
    Klasa NOT ktora dziedziczy po klasie Logical i zawiera metode wirtualna result ktora zwraca wynik operacji logicznej NOT
*/
class NOT:public Logical{
public:
   bool result(bool first) const ;
};