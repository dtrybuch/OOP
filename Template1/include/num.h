#pragma once
#include<iostream>

namespace num
{
    /*
    * Szablon do funkcji srednia, ktora zwraca wartosc srednia 
    * elementow w tablicy z podanym rozmiarem tablicy.
    */
    template<typename Typ>
    double srednia(const Typ * tab, int rozmiar)
    {
        double suma = 0;
        for(int i = 0; i<rozmiar; i++)
        {
            suma+=tab[i];
        }
        return suma/rozmiar;
    }
    /**
    * Przeladowanie szablonu do funkcji srednia, ktora zwraca wartosc srednia 
    * elementow w tablicy bez podanego rozmiaru tablicy.
    */
    template<typename Typ, int rozmiar>
    double srednia(Typ (&tab)[rozmiar])
    {
        double suma = 0;
        for(int i = 0; i<rozmiar; i++)
        {
            suma+=tab[i];
        }
        return suma/rozmiar;
    }
    /**
    * Sprawdza czy podana liczba jest pierwsza i zwraca true lub false.
    */
    bool czyPierwsza(int liczba);
    /**
    * Szablon do funkcji sprawdzajacej czy wszystkie elementy 
    * miedzy podanymi indeksami sa piersze.
    */
    template<int poczatek, int koniec, int rozmiar>
    bool czyWszystkiePierwszwe(int (&tab)[rozmiar])
    {
        for(int i = poczatek ; i < koniec; i++)
        {
            if(!czyPierwsza(tab[i]) ) return false; 
        }
        return true;
    }
    /**
    * Funkcja sprawdzajaca, czy podany argument jest true lub false 
    * (zwraca napis "TRUE" lub napis "FALSE").
    */
    std::string text(bool wynik);
}