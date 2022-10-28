#ifndef MAGACIN_HPP
#define MAGACIN_HPP

#include "Proizvod.hpp"
#include <vector>

class Magacin{
private:
    string naziv;
    string adresa;
    int kapacitet;
    vector<Proizvod*> proizvodi;

public:
    Magacin();
    Magacin(string naziv, string adresa, int kapacitet);  //vector bi trebao sam da se inicijalizuje?

    vector<Proizvod*> getProizvodi();

    void dodajProizvod(Proizvod* p);
    void ukloniProizvod(int indeks);

    void ispisMagacina();



};
#endif