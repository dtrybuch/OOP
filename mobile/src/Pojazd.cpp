#include"Pojazd.h"

Silnik::Silnik(float moc, float pojemnosc, string paliwo):m_moc(moc),m_paliwo(paliwo),m_pojemnosc(pojemnosc){}

Pojazd::Pojazd(Silnik &rodzajSilnika,string kolor, float stanLicznika,int LiczbaKol):m_rodzajSilnika(rodzajSilnika),m_stanLicznika(stanLicznika),m_kolor(kolor),m_liczbaKol(LiczbaKol){}

Silnik Pojazd::getRodzaj()
{
	return m_rodzajSilnika;
}
string Pojazd::getKolor()
{
	return m_kolor;
}
float Pojazd::getStan()
{
	return m_stanLicznika;
}
int Pojazd::getLiczbaKol()
{
	return m_liczbaKol;
}
