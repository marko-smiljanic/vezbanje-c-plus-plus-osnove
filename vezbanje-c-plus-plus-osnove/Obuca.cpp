#include "Obuca.hpp"

Obuca::Obuca() {}
Obuca::Obuca(string naziv, string opis, double cena, int broj, string tipMaterijala, string rucnaIzrada) :
        Proizvod(naziv, opis, cena), broj(broj), tipMaterijala(tipMaterijala), rucnaIzrada(rucnaIzrada) {}

void Obuca::ispis(){
    Proizvod::ispis();
    cout << " " << broj << " " << tipMaterijala << " " << rucnaIzrada << endl;
}

// string Obuca::toString() {
//     return "Obuca" + "," + Proizvod::toString() + "," + broj + "," + tipMaterijala + "," + rucnaIzrada;
// }