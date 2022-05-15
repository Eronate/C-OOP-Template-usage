#include <bits/stdc++.h>
#include "Animal.h"
#include "Vertebrate.h"
#include "Nevertebrate.h"
#include "Pesti.h"
#include "Mamifere.h"
#include "Reptile.h"
#include "Animal.cpp"
#include "Vertebrate.cpp"
#include "Nevertebrate.cpp"
#include "Pesti.cpp"
#include "Mamifere.cpp"
#include "Reptile.cpp"
using namespace std;

template <class T> class AtlasZoologic
{
    int animalCount;
    int nrFile;
    list<Animal*>AnimaleDePeFila;
public:
    AtlasZoologic(): animalCount(0), nrFile(0) {}
    void operator+=(T&);
    void afisareLista();
};

template <> class AtlasZoologic<Pesti>
{
    list <Pesti*>PestiRapitoriPeste1M;
    list <Pesti*>PestiRestul;
public:
    AtlasZoologic() {}
    void operator+=(Pesti&);
    void afisareRapitori();
    void afisareRestul();
};

template <class T>
void AtlasZoologic<T>::operator+=(T& AnimalOarecare)
{
    Animal* pointerAnimal=&AnimalOarecare;  //upcast de la Reptila*/Pasare*/Mamifer* la Animal*
    AnimaleDePeFila.push_back(pointerAnimal);
    return;
}

void AtlasZoologic<Pesti>::operator+=(Pesti &PesteDeAdaugat)
{
    string p=PesteDeAdaugat.getTipPeste();
    Pesti* pointerPeste=&PesteDeAdaugat;
    if(PesteDeAdaugat.getLungime()>=1 and (p=="Rapitor" or p=="RAPITOR" or p=="rapitor" ))
        PestiRapitoriPeste1M.push_back(pointerPeste);
    else
        PestiRestul.push_back(pointerPeste);
    return;
}

template <class T>
void AtlasZoologic<T>::afisareLista()
{
    for(Animal *it: AnimaleDePeFila)
        if(T* dinamicul=dynamic_cast<T*>(it))       ///tratarea cazului in care dynamic castul nu reuseste
            cout<<*dinamicul<<'\n';
        else
            cout<<"Nu s-a putut face downcast.\n";
    return;
}

void AtlasZoologic<Pesti>::afisareRapitori()
{
    for (Pesti *it: PestiRapitoriPeste1M)
        cout<<*it<<'\n';
    return;
}

void AtlasZoologic<Pesti>::afisareRestul()
{
    for (Pesti *it: PestiRestul)
        cout<<*it<<'\n';
    return;
}

int main()
{
    int choice,choice2;
    cout<<"Optiunile tale: \n";
    cout<<"1. Creeaza un atlas pentru mamifere. \n";
    cout<<"2. Creeaza un atlas pentru pesti. \n";
    cout<<"3. Creeaza un atlas pentru reptile. \n";
    cout<<"4. Creeaza un atlas pentru nevertebrate. \n";
    cout<<"Alegerea ta: \n";
    cin>>choice;
    if(choice==1)
    {
        AtlasZoologic<Mamifere> *atlasMamifere=new AtlasZoologic<Mamifere>();
        cout<<"Optiunile tale: \n";
        cout<<"1. Adauga un mamifer: \n";
        cout<<"2. Afiseaza atlasul de mamifere: \n";
        cout<<"3. Iesi din program. \n";
        while(true)
        {
            cin>>choice2;
            switch(choice2)
            {
            case 1:
            {
                Mamifere m;
                cout<<"Introdu cele 3 dimensiuni ale mamiferului, tipul mamiferului (uscat, apa, zburator) si numele animalului. \n";
                cin>>m;
                Mamifere *mPointer=new Mamifere(m);
                *atlasMamifere+=(*mPointer);
                cout<<"Mamiferul tau a fost retinut. \n";
                break;
            }
            case 2:
            {
                cout<<"Atlasul tau contine urmatoarele: \n";
                atlasMamifere->afisareLista();
                break;
            }
            case 3:
            {
                return 0;
            }
            }
        }
    }
    else if(choice == 2 )
    {
        AtlasZoologic<Pesti> *atlasPesti = new AtlasZoologic<Pesti>();
        cout<<"Optiunile tale: \n";
        cout<<"1. Adauga un peste: \n";
        cout<<"2. Afiseaza pestii rapitori >1m din atlas: \n";
        cout<<"3. Afiseaza restul pestilor din atlas: \n";
        cout<<"4. Iesi din program. \n";
        while(true)
        {

            cin>>choice2;
            switch(choice2)
            {
            case 1:
            {
                cout<<"Introdu cele 3 dimensiuni ale pestelui, tipul vertebratei (de apa in acest caz), tipul pestelui (rapitor/nerapitor) si numele pestelui\n";
                Pesti p;
                cin>>p;
                Pesti *pPointer=new Pesti(p);
                *atlasPesti+=(*pPointer);
                break;
            }
            case 2:
            {
                cout<<"Pestii tai rapitori sunt: \n";
                atlasPesti->afisareRapitori();
                break;
            }
            case 3:
            {
                cout<<"Pestii tai sunt: \n";
                atlasPesti->afisareRestul();
                break;
            }
            case 4:
            {
                return 0;
            }
            }
        }

    }
    else if(choice == 3 )
    {
        AtlasZoologic<Reptile> *atlasReptile = new AtlasZoologic<Reptile>();
        cout<<"Optiunile tale: \n";
        cout<<"1. Adauga o reptila: \n";
        cout<<"2. Afiseaza reptilele din atlasul tau: \n";
        cout<<"3. Iesi din program. \n";
        while(true)
        {

            cin>>choice2;
            switch(choice2)
            {
            case 1:
            {
                cout<<"Introdu cele 3 dimensiuni ale reptilei, tipul vertebratei (uscat, apa) si numele reptilei. \n";
                Reptile r;
                cin>>r;
                Reptile *rPointer=new Reptile(r);
                *atlasReptile+=(*rPointer);
                cout<<"Reptila ta a fost adaugata. \n";
                break;
            }
            case 2:
            {
                cout<<"Atlasul tau de reptile contine: \n";
                atlasReptile->afisareLista();
                break;
            }
            case 3:
            {
                return 0;
            }
            }
        }

    }

    else if(choice == 4 )
    {
        AtlasZoologic<Nevertebrate> *atlasNevertebrate = new AtlasZoologic<Nevertebrate>();
        cout<<"Optiunile tale: \n";
        cout<<"1. Adauga o nevertebrata ^_^: \n";
        cout<<"2. Afiseaza nevertebratele din atlasul tau: \n";
        cout<<"3. Iesi din program. \n";
        while(true)
        {
            cin>>choice2;
            switch(choice2)
            {
            case 1:
            {
                cout<<"Introdu cele 3 dimensiuni ale nevertebratei tale si numele ei. \n";
                Nevertebrate n;
                cin>>n;
                Nevertebrate *nPointer=new Nevertebrate(n);
                *atlasNevertebrate+=(*nPointer);
                cout<<"Nevertebrata ta a fost adaugata in atlas. \n";
                break;
            }
            case 2:
            {
                cout<<"Lista cu nevertebratele din atlas \n";
                atlasNevertebrate->afisareLista();
                break;
            }
            case 3:
            {
                return 0;
            }
            }
        }
    }

}
