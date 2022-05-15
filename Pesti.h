#ifndef PESTI_H_INCLUDED
#define PESTI_H_INCLUDED
using namespace std;
class Pesti: public Vertebrate
{
    string numePeste;
    string tipPeste;
public:
    Pesti(): Vertebrate(), numePeste("") {}
    Pesti(float lung, float inalt, float lat, string tipV, string numeP, string tipP): Vertebrate(lung, inalt, lat, tipV), numePeste(numeP), tipPeste(tipP) {}
    void setNumePeste(string s)
    {
        numePeste=s;
    }
    void setTipPeste(string s)
    {
        tipPeste=s;
    }
    string getNumePeste()
    {
        return numePeste;
    }
    string getTipPeste()
    {
        return tipPeste;
    }
    friend std::istream& operator>>(std::istream&, Pesti &);
    friend std::ostream& operator<<(std::ostream&, Pesti &);
    Pesti& operator=(Pesti&);
    void afisare()const;
    void citire();
};

#endif
