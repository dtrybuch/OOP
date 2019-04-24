#include<iostream>
/**
* Przestrzen nazw Executor zawierajaca funkcje secureRun ktora 
* wywoluje dana funkcje matematyczna i sprawdza czy podalismy dobre 
* argumenty. Znajduje sie tez w niej klasa Result ktora przechowuje  
* informacje o wartosci funkcji matematycznej oraz czy wystapil problem,
* a jezeli wystapil to jaki.
*/
namespace Executor
{
    class Function{
    public:
        virtual double operator()(double x) const = 0; 
    };

    class Result{
    public:
        operator double();
        double valid;
        double value;
        std::string problem; 
    };

    Result secureRun(const Function &fun, double x);
}

std::ostream &operator<<(std::ostream &window,Executor::Result object);