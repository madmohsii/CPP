#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <string>
#include <iostream>

class Voiture {
 
    public:
    Voiture();
    ~Voiture();
    std::string m_couleur;
    void setMarque(std::string marq);
    void setVitesse(int vit);
    void setCouleur(std::string coul);
    void getMarque();
    void getVitesse();
    void getCouleur();
    
    private:
    std::string m_marque;
    int m_vitesse;

};

#endif