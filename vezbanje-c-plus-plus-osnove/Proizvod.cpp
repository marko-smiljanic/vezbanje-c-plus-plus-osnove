#include "Proizvod.hpp"

Proizvod::Proizvod() {}
Proizvod::Proizvod(string naziv, string opis, double cena) : naziv(naziv), opis(opis), cena(cena) {}

string Proizvod::getNaziv(){
    return this->naziv;
}
void Proizvod::setNaziv(string naziv){
    this->naziv = naziv;
}
string Proizvod::getOpis(){
    return this->opis;
}
void Proizvod::setOpis(string opis){
    this->opis = opis;
}
double Proizvod::getCena(){
    return this->cena;
}
void Proizvod::setCena(double cena){
    this->cena = cena;
}

void Proizvod::ispis(){
    cout << naziv << " " << opis << " " << cena;
}

// virtual string Proizvod::toString(){
//     return naziv + "," + opis + "," + cena;
// }