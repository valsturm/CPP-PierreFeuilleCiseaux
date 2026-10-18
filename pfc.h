#pragma once

#include <iostream> 

class pfc {
    public:
        pfc();
        ~pfc();
        
        int joueur_choix;
        int bot_choix;
        
        int choisir(int = 0);
        int bataille();
};