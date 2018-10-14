#include <iostream>
#include "interface.hpp"
using namespace std;


void affichermenu(){
    system("clear");
	cout << endl << endl << "\tAsobô" << endl << endl;
	cout << "Que voulez-vous faire ?\n\n";
	cout << " 1 - Epreuve 1\n 2 - Epreuve 2\n 3 - Epreuve 3\n 4 - Consuleter votre progression\n 0 - Quitter\n\nVotre choix ? ";
}

void afficherretour(){
    cout << endl << "\t 0 pour revenir en arrière ";
}

void affprogression(Joueur& j){
    int choix;
    system("clear");
    cout << endl << endl << "\tVotre progression :" << endl << endl;
    j.getcarac();

    afficherretour();
    do{
        cin >> choix;
    }while (choix != 0);
}

