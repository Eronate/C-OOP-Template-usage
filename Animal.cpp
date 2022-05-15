using namespace std;

std::istream& operator>>(std::istream &in, Animal &a)
{
    float lung,inalt,lat;
    in>>lung>>inalt>>lat;
    a.lungime=lung;
    a.inaltime=inalt;
    a.latime=lat;
    return in;
}

std::ostream& operator<<(std::ostream &out, Animal &a)
{
    out<<a.lungime<<" " <<a.inaltime<<" "<<a.latime<<"\n";
    return out;
}

Animal& Animal::operator=(Animal& dePreluat)
{
    this->setInaltime(dePreluat.getInaltime());
    this->setLatime(dePreluat.getLatime());
    this->setLungime(dePreluat.getLungime());
    return *this;
}

void Animal::afisare() const
{
    Animal *aista=const_cast<Animal*>(this);
    cout<<*aista;
    return;
}

void Animal::citire()
{
    Animal deCitit;
    cin>>deCitit;
    *this=deCitit;
}
