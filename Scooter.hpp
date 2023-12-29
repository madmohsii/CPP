#ifndef DEF_SCOOTER
#define DEF_SCOOTER
#include "Vehicule.hpp"
#include <string>

class Scooter:public Vehicule {

private:

int m_cylindree;

public :
Scooter();
Scooter(std::string coul, std::string marq, int vit, int pos, int cyl);
Scooter(const Scooter& autre);
~Scooter();
void setCylindree(int cyl);
void getCylindree() const;



};

#endif