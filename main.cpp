using namespace std;
#include "pfc.h"

void main(){
    srand(time(NULL));
    int n = 0;
    while (n < 100) {
        pfc partie;
    
        int choix;
        cout << "(pierre  :  1)" << endl;
        cout << "(feuille  :  2)" << endl;
        cout << "(ciseaux  :  3)" << endl;
        cout << endl;
        cout << "(random  :  0)" << endl;
        cout << "Entrez votre choix : ";
        cin >> choix;
        partie.choisir(choix);
        cout << endl;
        
        
        switch (partie.joueur_choix) {
            case 1:
                cout << "Vous avez joué PIERRE" << endl;
                break;
            case 2:
                cout << "Vous avez joué FEUILLE" << endl;
                break;
            case 3:
                cout << "Vous avez joué CISEAUX" << endl;
                break;
        }
     
        switch (partie.bot_choix) {
            case 1:
                cout << "Le bot a joué PIERRE" << endl;
                break;
            case 2:
                cout << "Le bot a joué FEUILLE" << endl;
                break;
            case 3:
                cout << "Le bot a joué CISEAUX" << endl;
                break;
        }
        
        switch (partie.bataille()) {
            case 0:
                cout << "-> Défaite" << endl;
                break;
            case 1:
                cout << "-> Victoire !" << endl;
                break;
            case 2:
                cout << "-> Égalité" << endl;
                break;
        }
        
        n++;
        cout << "-----------------------------------" << endl;
    }
    
}