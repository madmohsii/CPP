#include <iostream>
#include "Vehicule.hpp"
#include "Scooter.hpp"

using namespace std ;

int main()
{
   
    Scooter gamos2("noire", "vespa", 120, 20, 250);
    gamos2.getCylindree();
    gamos2.getCouleur();
    return 0;
}
