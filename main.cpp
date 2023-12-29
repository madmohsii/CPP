#include <iostream>
#include "Vehicule.hpp"
#include "Scooter.hpp"
#include "Camion.hpp"


using namespace std ;

int main()
{
   
    Scooter gamos2("noire", "vespa", 120, 20, 250);
    Scooter gamos3(gamos2);
    gamos2.getCylindree();
    gamos2.getCouleur();
    gamos3.getCouleur();
    Camion toto("noire", "vespa", 120, 20, 250);
    toto.getPoidsCharge();
    toto.setPoidsCharge(60);
    toto.getPoidsCharge();
    Camion toto2(toto);
    toto2.getCouleur();
    return 0;
}
