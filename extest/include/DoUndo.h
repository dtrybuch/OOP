#pragma once
/**
*klasa DoUndoAction bedaca interfejsem dla klas KeepInt oraz Msg
*/
class DoUndoAction{
public:
    virtual void dodo() = 0;
    virtual void undoOk() = 0;
    virtual void undoFail() = 0;
    virtual ~DoUndoAction(){}
protected:
};
/**
*klasa ktora przechowuje biezaca i poczatkowa wrtosc, za pomoca metody
*undoFail() mozna przywrocic wartosc poczatkowa na danym koncie
*/
class KeepInt:public DoUndoAction{
public:
    KeepInt(int &value);
    void dodo() override{}
    void undoOk() override{}
    void undoFail() override;
    ~KeepInt(){}
protected:
    int m_int;
    int & m_refInt;
};
/**
*klasa DoUndo przechowujaca dana akcje i wykonujaca zadania na niej,
*przy kasowaniu uruchamiana jest metoda undoOk() z danej akcji jesli 
*transakcja przebiegla pomyslnie lub undoFail(), jesli transakcja 
*zakonczyla sie bledem. Klasa posiada tez metode allok(), ktora
*zapisuje informacje, ze transakcja przebiegla pomyslnie 
*/
class DoUndo{
public:
    DoUndo(DoUndoAction * action); 
    static void allok();
    ~DoUndo();
protected:
    DoUndoAction *m_action;
    static bool m_isOk;
};