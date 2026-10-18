using namespace std;
#include "pfc.h"


pfc::pfc() {
    joueur_choix = 0;
    bot_choix = rand() % 3 + 1;
}

pfc::~pfc() {}


int pfc::choisir(int choix) {
    if (choix == 0) {
        choix = rand() % 3 + 1;
    }
    if (choix != 1 && choix != 2 && choix != 3) { 
        return 1; // 1 signifie que le choix est incorrect
    }
    
    joueur_choix = choix;
    return 0; // 0 signifie qu'il n'y a pas d'erreur
}

int pfc::bataille() {
    if (joueur_choix == bot_choix) {
        return 2; // égalité
    }
    switch (joueur_choix*10 + bot_choix) {
        case 12:
            return 0; // défaite
        case 13:
            return 1; // victoire
        case 21:
            return 1; // défaite
        case 23:
            return 0; // victoire
    }
}