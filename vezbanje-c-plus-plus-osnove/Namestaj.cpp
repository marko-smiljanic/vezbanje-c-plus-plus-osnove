#include "Namestaj.hpp"

Namestaj::Namestaj() {}
Namestaj::Namestaj(string naziv, string opis, double cena, double sirina, double duzina, double visina, string tipNamestaja) :
        Proizvod(naziv, opis, cena), sirina(sirina), duzina(duzina), visina(visina), tipNamestaja(tipNamestaja) {}

void Namestaj::ispis(){
    Proizvod::ispis();
    cout << " " << sirina << " " << duzina << " " << visina << " " << tipNamestaja << endl;
}