#include "Proizvod.hpp"
#include "Obuca.hpp"
#include "Namestaj.hpp"
#include "Magacin.hpp"

#include <fstream>




int main(){
    Proizvod* p1 = new Obuca("Naziv1", "Opis1", 220, 42, "Koza", "Italijanska rucna izrada");
    Proizvod* p2 = new Namestaj("Naziv2", "Opis2", 220, 50, 70, 25, "Kuhinja");
    Proizvod* p3 = new Obuca("Naziv3", "Opis3", 520, 40, "Koza", "Rucna izrada samo lepljenje djona");
    
    Magacin* mg = new Magacin ("Ikea", "Rumenacka 44", 6);
    mg->dodajProizvod(p1);
    mg->dodajProizvod(p2);
    mg->dodajProizvod(p3);

    mg->ispisMagacina();

    for(int i = 0; i < mg->getProizvodi().size(); i++){
        if(mg->getProizvodi().at(i)->getNaziv() == "Naziv3"){  //mogao sam i redefinisati operator[], ili neku funkciju dobai, ali moze i ovako
            mg->ukloniProizvod(i);
            break;
        }
    }
    mg->ispisMagacina();
    







    return 0;
}