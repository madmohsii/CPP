#include "Voiture.hpp"

using namespace std;

Voiture::Voiture() {
   m_couleur="rouge";
   m_vitesse=50;
   m_marque="renault";
   cout<<"un objet vient d'etre cree"<<endl;
}

Voiture::Voiture(string coul, int vit, string marq) {
   m_couleur=coul;
   m_vitesse=vit;
   m_marque=marq;
   cout<<"un objet vient d'etre cree"<<endl;
}

Voiture::~Voiture(){
    cout<<"un objet a ete detruit"<<endl;
}

void Voiture::setMarque(string marq){
    m_marque=marq;
}

void Voiture::setCouleur(string coul){
    m_couleur=coul;
}

void Voiture::setVitesse(int vit){
    m_vitesse=vit;
}

void Voiture::getVitesse(){
    cout<<"La vitesse est "<<m_vitesse<<endl;
}

void Voiture::getCouleur(){
    cout<<"La couleur est "<<m_couleur<<endl;
}

void Voiture::getMarque(){
    cout<<"La couleur est "<<m_marque<<endl;
}

