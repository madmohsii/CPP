#include <iostream>
#include <string>
#include "Voiture.hpp"
using namespace std ;

int main()
{
   Voiture * ptr_gamos = new Voiture;

   ptr_gamos->getCouleur();
   ptr_gamos->setCouleur("verte");
   ptr_gamos->getCouleur();
   delete ptr_gamos;

    return 0;
}
