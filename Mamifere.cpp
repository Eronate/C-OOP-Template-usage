using namespace std;
std::istream& operator>>(std::istream& in, Mamifere &v)
{
    Animal a;
    in>>a;
    string s,ss;
    in>>s;
    in>>ss;
    v.setLungime(a.getLungime());
    v.setLatime(a.getLatime());
    v.setInaltime(a.getInaltime());
    v.setTipVertebrata(s);
    v.setNumeMamifer(ss);
    return in;
}
std::ostream& operator<<(std::ostream& out, Mamifere &v)
{
    out<<v.lungime<<" " <<v.inaltime<<" "<<v.latime<<" "<<v.tipVertebrata<<" "<<v.numeMamifer;
    return out;
}

Mamifere& Mamifere::operator=(Mamifere& v)
{
    this->setLungime(v.lungime);
    this->setLatime(v.latime);
    this->setInaltime(v.inaltime);
    this->setTipVertebrata(v.tipVertebrata);
    this->setNumeMamifer(v.numeMamifer);
    return *this;
}

void Mamifere::afisare() const
{
    Mamifere *v=const_cast<Mamifere*>(this);
    cout<<*v;
}

void Mamifere::citire()
{
    Mamifere v;
    cin>>v;
    *this=v;
}
