using namespace std;
std::istream& operator>>(std::istream& in, Vertebrate &v)
{
    Animal a;
    in>>a;
    string s;
    in>>s;
    v.setLungime(a.getLungime());
    v.setLatime(a.getLatime());
    v.setInaltime(a.getInaltime());
    v.setTipVertebrata(s);
    return in;
}
std::ostream& operator<<(std::ostream& out, Vertebrate &v)
{
    out<<v.lungime<<" " <<v.inaltime<<" "<<v.latime<<" "<<v.tipVertebrata<<"\n";
    return out;
}

Vertebrate& Vertebrate::operator=(Vertebrate& v)
{
    this->setLungime(v.lungime);
    this->setLatime(v.latime);
    this->setInaltime(v.inaltime);
    this->setTipVertebrata(v.tipVertebrata);
    return *this;
}

void Vertebrate::afisare() const
{
    Vertebrate *v=const_cast<Vertebrate*>(this);
    cout<<*v;
}

void Vertebrate::citire()
{
    Vertebrate v;
    cin>>v;
    *this=v;
}
