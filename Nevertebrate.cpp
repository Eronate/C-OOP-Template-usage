using namespace std;
std::istream& operator>>(std::istream& in, Nevertebrate &v)
{
    Animal a;
    in>>a;
    string s;
    in>>s;
    v.setLungime(a.getLungime());
    v.setLatime(a.getLatime());
    v.setInaltime(a.getInaltime());
    v.setNumeNevertebrata(s);
    return in;
}
std::ostream& operator<<(std::ostream& out, Nevertebrate &v)
{
    out<<v.lungime<<" " <<v.inaltime<<" "<<v.latime<<" "<<v.numeNevertebrata<<"\n";
    return out;
}

Nevertebrate& Nevertebrate::operator=(Nevertebrate& v)
{
    this->setLungime(v.lungime);
    this->setLatime(v.latime);
    this->setInaltime(v.inaltime);
    this->setNumeNevertebrata(v.numeNevertebrata);
    return *this;
}

void Nevertebrate::afisare() const
{
    Nevertebrate *v=const_cast<Nevertebrate*>(this);
    cout<<*v;
}

void Nevertebrate::citire()
{
    Nevertebrate v;
    cin>>v;
    *this=v;
}
