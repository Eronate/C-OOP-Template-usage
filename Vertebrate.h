#include "Animal.h"
#ifndef VERTEBRATE_H_INCLUDED
#define VERTEBRATE_H_INCLUDED
using namespace std;

class Vertebrate: public Animal
{
protected:
    string tipVertebrata; //de apa, de uscat, zburatoare
public:
    Vertebrate(): Animal(), tipVertebrata("") {}
    Vertebrate(float lung, float inalt, float lat, string tipV): Animal(lung,inalt,lat), tipVertebrata(tipV) {}
    void setTipVertebrata(string s)
    {
        tipVertebrata=s;
    }
    string getTipVertebrata()
    {
        return tipVertebrata;
    }
    friend std::istream& operator>>(std::istream&, Vertebrate &);
    friend std::ostream& operator<<(std::ostream&, Vertebrate &);
    Vertebrate& operator=(Vertebrate&);
    virtual void afisare() const;
    virtual void citire();
};

#endif // VERTEBRATE_H_INCLUDED
