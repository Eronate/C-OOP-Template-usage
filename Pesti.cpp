using namespace std;
std::istream& operator>>(std::istream& in, Pesti &v)
{
    Animal a;
    in>>a;
    string s,ss,sss;
    in>>s>>ss>>sss;
    v.setLungime(a.getLungime());
    v.setLatime(a.getLatime());
    v.setInaltime(a.getInaltime());
    v.setTipVertebrata(s);
    v.setTipPeste(ss);
    v.setNumePeste(sss);
    return in;
}
std::ostream& operator<<(std::ostream& out, Pesti &v)
{
    out<<v.lungime<<" " <<v.inaltime<<" "<<v.latime<<" "<<v.tipVertebrata<<" "<<v.tipPeste<<" "<<v.numePeste;
    return out;
}

Pesti& Pesti::operator=(Pesti& v)
{
    this->setLungime(v.lungime);
    this->setLatime(v.latime);
    this->setInaltime(v.inaltime);
    this->setTipVertebrata(v.tipVertebrata);
    this->setTipPeste(v.tipPeste);
    this->setNumePeste(v.numePeste);
    return *this;
}

void Pesti::afisare() const
{
    Pesti *v=const_cast<Pesti*>(this);
    cout<<*v;
}

void Pesti::citire()
{
    Pesti v;
    cin>>v;
    *this=v;
}
