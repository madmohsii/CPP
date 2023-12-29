
#include "Camion.hpp"
#include <iostream>
using namespace std;

Camion::Camion():Vehicule()
{
}

Camion::Camion(string coul, string marq, int vit, int pos, int poids):Vehicule(coul, marq, vit, pos){
    m_poidsCharge=poids;
    
}

Camion::Camion(const Camion& autre):Vehicule(autre){
    cout<<"un objet recopie a ete cree"<<endl;

}

Camion::~Camion(){
    cout<<"Un objet a ete detruit"<<endl;
}

void Camion::getPoidsCharge() const{

    cout<<"Le poids de la charge est de "<< m_poidsCharge<<endl;
}

void Camion::setPoidsCharge(int poids){

    m_poidsCharge=poids;
}

