#include <iostream>
#include "joueur.hpp"
#include "interface.hpp"

using namespace std;

int main(int, char**){
    Joueur* j1 = new Joueur();
    Joueur* j2 = new Joueur("lucie");
    int choix;
    int conf;
    do{
        affichermenu();
        do{
            cin >> choix;
        }while (choix<0 || choix>4);

        switch (choix){
            case 4:
                affprogression(*j2);
                break;
            case 0:
                cout << endl << "Etes-vous sûr de vouloir quitter le jeu ?\n 0 - non \n 1 - oui" << endl;
                do{
                    cin >> conf;
                }while (conf<0 || conf>1);
                if (conf == 0)
                    choix = -1;
                break;
            case -1:
                break;
            default:
                cout << "pour l'instant on n'a rien prévu" << endl;
                break;
        }

    }while (choix != 0);

    system("clear");
    cout << endl << endl << "Merci d'avoir joué à Asobô !\n\tA bientôt" << endl << endl;

    return 0;
}