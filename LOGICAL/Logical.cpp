#include "Logical.h"

bool Logical::eval(const Logical& object, bool first, bool second)
{
    return object.result(first,second);
}
bool Logical::eval(const Logical& object, bool first)
{
    return object.result(first);
}
bool Logical::result(bool first, bool second) const
{
    return first;
}
bool Logical::result(bool first) const
{
    return first;
}
bool OR::result(bool first, bool second) const 
{
    if(first== true || second == true) return true;
    else return false;
}
bool AND::result(bool first, bool second) const 
{
    if(first==true && second==true) return true;
    else return false;
}
bool NOT::result(bool first) const
{
    return ~first;
}