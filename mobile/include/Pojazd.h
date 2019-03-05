#pragma once
#include<iostream>
#include<string>
using std::string;

class Silnik {
protected:
	float m_moc;
	float m_pojemnosc;
	string m_paliwo;

public:
	Silnik() {}
	Silnik(float moc , float pojemnosc, string paliwo);
};

class Pojazd {
protected:
	float m_stanLicznika;
	string m_kolor;
	Silnik m_rodzajSilnika;
	int m_liczbaKol;
public:
	Pojazd() {}
	Pojazd(Silnik &rodzajSilnika, string kolor, float stanLicznika,int liczbaKol);
	Silnik getRodzaj();
	string getKolor();
	float getStan();
	int getLiczbaKol();
};