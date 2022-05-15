#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
using namespace std;
class Reptile: public Vertebrate
{
    string numeReptila;
public:
    Reptile(): Vertebrate(), numeReptila("") {}
    Reptile(float lung, float inalt, float lat, string tipV, string numeR): Vertebrate(lung, inalt, lat, tipV), numeReptila(numeR) {}
    void setNumeReptila(string s)
    {
        numeReptila=s;
    }
    friend std::istream& operator>>(std::istream&, Reptile &);
    friend std::ostream& operator<<(std::ostream&, Reptile &);
    Reptile& operator=(Reptile&);
    void afisare() const;
    void citire();
};


#endif // REPTILE_H_INCLUDED
