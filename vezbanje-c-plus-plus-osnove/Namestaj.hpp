#ifndef NAMESTAJ_HPP
#define NAMESTAJ_HPP

#include "Proizvod.hpp"


class Namestaj : public Proizvod {
private:
    double sirina;
    double duzina;
    double visina;
    string tipNamestaja;
public:
    Namestaj();
    Namestaj(string naziv, string opis, double cena, double sirina, double duzina, double visina, string tipNamestaja);

    void ispis() override;

};
#endif