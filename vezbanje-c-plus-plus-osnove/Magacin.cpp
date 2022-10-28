#include "Magacin.hpp"


Magacin::Magacin() {}
Magacin::Magacin(string naziv, string adresa, int kapacitet) : naziv(naziv), adresa(adresa), kapacitet(kapacitet) {}

vector<Proizvod*> Magacin::getProizvodi(){
    return this->proizvodi;
}

void Magacin::dodajProizvod(Proizvod* p){
    if(kapacitet > this->proizvodi.size()){
        proizvodi.push_back(p);
        cout << "Proizvod uspesno dodat u magacin." << endl;
    }else{
        cout << "Dodavanje nije moguce. Kapacitet je pun." << endl;
    }
}
void Magacin::ukloniProizvod(int indeks){
    if(indeks < 0 || indeks >= kapacitet){
        cout << "Neispravno unet indeks." << endl;
        return;
    }
    proizvodi.erase(proizvodi.begin() + indeks);
    cout << "Proizvod uspesno uklonjen." << endl;
}

void Magacin::ispisMagacina(){
    for(int i = 0; i < proizvodi.size(); i++){
        proizvodi.at(i)->ispis();
    }
}

