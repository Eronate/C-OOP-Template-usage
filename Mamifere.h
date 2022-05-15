#ifndef MAMIFERE_H_INCLUDED
#define MAMIFERE_H_INCLUDED

using namespace std;

class Mamifere: public Vertebrate
{
    string numeMamifer;
public:
    Mamifere(): Vertebrate(), numeMamifer("") {}
    Mamifere(float lung, float inalt, float lat, string tipV, string numeM): Vertebrate(lung, inalt, lat, tipV), numeMamifer(numeM) {}
    void setNumeMamifer(string s)
    {
        numeMamifer=s;
    }
    friend std::istream& operator>>(std::istream&, Mamifere &);
    friend std::ostream& operator<<(std::ostream&, Mamifere &);
    Mamifere& operator=(Mamifere&);
    void afisare() const;
    void citire();
};

#endif // MAMIFERE_H_INCLUDED
