#include "DoUndo.h"

bool DoUndo::m_isOk = false;

KeepInt::KeepInt(int &value):m_int(value),m_refInt(value){}

void KeepInt::undoFail(){ m_refInt = m_int;}

DoUndo::DoUndo(DoUndoAction * action):m_action(action)
{
    m_action->dodo();
    m_isOk = false;
}

void DoUndo::allok(){m_isOk = true;}

DoUndo::~DoUndo()
{
    if(m_isOk) m_action->undoOk();
    else m_action->undoFail();
    delete(m_action);
}