#ifndef PROIZVOD_HPP
#define PROIZVOD_HPP

using namespace std;
#include <string>
#include <iostream>


class Proizvod {
protected:
    string naziv;
    string opis;
    double cena;
public:
    Proizvod();
    Proizvod(string naziv, string opis, double cena);

    string getNaziv();
    void setNaziv(string naziv);
    string getOpis();
    void setOpis(string opis);
    double getCena();
    void setCena(double cena);

    virtual void ispis() = 0;
    // virtual string toString();  //nemam vremena da odradim fajlove... premalo ste vremena dali... ne mogu da iskucam toliko brzo + kada zavrsim sve ispravljam greske jedno 10 minuta 
                                    //jer nisam masina da otkucam sve iz prve i za ovo vreme.

};
#endif