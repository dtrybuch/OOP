#include "Lozko.h"
#include "Sofa.h"

class Kanapa: public Sofa,public Lozko{
protected:

public:
    Kanapa(int sz, int wys, int dl,int siedz,int spanie);
    virtual std::ostream & print(std::ostream& ekran) const;
    ~Kanapa();
};
