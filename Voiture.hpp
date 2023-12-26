#ifndef DEF_VOITURE
#define DEF_VOITURE

#include <string>
#include <iostream>

class Voiture {

    private:

    std::string m_marque;
    int m_vitesse;

    public:
    Voiture();
    Voiture(string coul, int vit, string marq);
    ~Voiture();
    std::string m_couleur;
    void setMarque(std::string marq);
    void setVitesse(int vit);
    void setCouleur(std::string coul);
    void getMarque();
    void getVitesse();
    void getCouleur();

};

#endif