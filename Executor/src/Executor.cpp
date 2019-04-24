#include "Executor.h"

Executor::Result::operator double()
{
    if(valid == 0)
    {
        throw "";
    }
    else
        return value;
}

Executor::Result Executor::secureRun(const Function &fun, double x)
{
        Result tmp;
        try
        {
            tmp.value = fun(x);
            tmp.valid = 1;
            tmp.problem = "";
        }
        catch(const bool e)
        {
            tmp.problem = "Boolean of value false thrown";
            tmp.valid = 0;
        }
        catch(const char * e)
        {
            tmp.problem = "ERROR Invalid argument";
            tmp.valid = 0;
        }
        return tmp;
    }

std::ostream &operator<<(std::ostream &window,Executor::Result object)
{
    if(object.valid == 0)
        window<<object.problem;
    else 
        window<<object.value;
    return window;
}