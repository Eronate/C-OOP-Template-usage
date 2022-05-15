#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
class Animal
{
    //in Animal retin doar dimensiunile
protected:
    float lungime;
    float inaltime;
    float latime;
public:
    Animal(): lungime(0), inaltime(0), latime(0) {}
    Animal(float lung, float inalt, float lat): lungime(lung), inaltime(inalt), latime(lat) {}
    void setLungime(float L)
    {
        lungime=L;
    }
    void setInaltime(float I)
    {
        inaltime=I;
    }
    void setLatime(float L)
    {
        latime=L;
    }
    float getLungime()
    {
        return lungime;
    }
    float getInaltime()
    {
        return inaltime;
    }
    float getLatime()
    {
        return latime;
    }
    friend std::istream& operator>>(std::istream&, Animal &);
    friend std::ostream& operator<<(std::ostream&, Animal &);
    Animal& operator=(Animal &);
    virtual void afisare()const;
    virtual void citire();
};

#endif // ANIMAL_H_INCLUDED
