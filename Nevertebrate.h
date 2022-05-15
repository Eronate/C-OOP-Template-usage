#ifndef NEVERTEBRATE_H_INCLUDED
#define NEVERTEBRATE_H_INCLUDED
using namespace std;
class Nevertebrate: public Animal
{
    string numeNevertebrata; //rama, melc, etc
public:
    Nevertebrate(): Animal(), numeNevertebrata("") {}
    Nevertebrate(float lung, float inalt, float lat, string nN): Animal(lung,inalt,lat), numeNevertebrata(nN) {}
    void setNumeNevertebrata(string s)
    {
        numeNevertebrata=s;
    }
    friend std::istream& operator>>(std::istream&, Nevertebrate &);
    friend std::ostream& operator<<(std::ostream&, Nevertebrate &);
    Nevertebrate& operator=(Nevertebrate &);
    void afisare() const;
    void citire();
};

#endif // NEVERTEBRATE_H_INCLUDED
