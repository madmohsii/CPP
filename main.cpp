#include <iostream>
#include <string>

#include "Voiture.hpp"

using namespace std ;

int main()
{
   Voiture gamos;

   gamos.getCouleur();
   gamos.setCouleur("verte");
   gamos.getCouleur();

    return 0;
}
