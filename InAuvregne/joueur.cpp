#include "joueur.hpp"

void Joueur::getcarac(){
    cout << "Nom joueur : " << nom << endl;
    cout << "Expérience acquise : " << xp << endl;
    cout << "Niveau actuel : " << level << endl;
}

void Joueur::incrxp(int xpgagne){
    int newlv;
    xp += xpgagne;
    cout << "Vous avez gagné " << xpgagne << "points d'expérience" << endl;

    newlv = (xp / 1000)+1;
    if (newlv>level){
        level = newlv;
        cout << "Félictation, vous avez gagné un niveau !\nVous êtes actuellement au niveau " << level << endl;
    }
}

Joueur::Joueur(){
    nom = "none";
    xp = 0;
    level = 0;

    cout << "Joueur créé sans type" << endl;
}

Joueur::Joueur(string n="no name"):
    nom(n), xp(0), level(1)
{
    cout << "Personnage de type créé avec nom" << endl;
}

Joueur::~Joueur(){
    cout << "Joueur détruit" << endl;
}