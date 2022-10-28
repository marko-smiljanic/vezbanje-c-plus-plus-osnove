#ifndef OBUCA_HPP
#define OBUCA_HPP

#include "Proizvod.hpp"

class Obuca : public Proizvod {
private:
    int broj;
    string tipMaterijala;
    string rucnaIzrada;
public:
    Obuca();
    Obuca(string naziv, string opis, double cena, int broj, string tipMaterijala, string rucnaIzrada);

    void ispis() override;
    // string toString() override;


};
#endif