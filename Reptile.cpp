using namespace std;
std::istream& operator>>(std::istream& in, Reptile &v)
{
    Animal a;
    in>>a;
    string s,ss;
    in>>s>>ss;
    v.setLungime(a.getLungime());
    v.setLatime(a.getLatime());
    v.setInaltime(a.getInaltime());
    v.setTipVertebrata(s);
    v.setNumeReptila(ss);
    return in;
}
std::ostream& operator<<(std::ostream& out, Reptile &v)
{
    out<<v.lungime<<" " <<v.inaltime<<" "<<v.latime<<" "<<v.tipVertebrata<<" "<<v.numeReptila;
    return out;
}

Reptile& Reptile::operator=(Reptile& v)
{
    this->setLungime(v.lungime);
    this->setLatime(v.latime);
    this->setInaltime(v.inaltime);
    this->setTipVertebrata(v.tipVertebrata);
    this->setNumeReptila(v.numeReptila);
    return *this;
}

void Reptile::afisare() const
{
    Reptile *v=const_cast<Reptile*>(this);
    cout<<*v;
}

void Reptile::citire()
{
    Reptile v;
    cin>>v;
    *this=v;
}

