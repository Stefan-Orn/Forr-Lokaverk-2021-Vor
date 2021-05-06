//Þetta er 
#pragma once
#include <iostream>
#include "FerdaNode.h"
#include "batsferd.h"
#include "flugferd.h"
#include "hjolaferd.h"
// Þetta er hluturinn á forritinu sem kallar fram alla klasana og setur allar ferðinar í lista sem er í þessu forriti
// hash gerð.
class FerdaStofa{
    private: // Í private hlutanum bý ég til breytunar sem að ég ætla að notafæra mér.
        FerdaNode** heads;
        int staerd;
        int hash(int id);
    public: 
        FerdaStofa();
        FerdaStofa(int defaulstaerd);
        void skra(Ferd* ferd);
        void skraBatur(int id, int plass, int bokadir, bool yfirbyggdur);
        void skraFlug(int id, int plass, int bokadir, std::string stadur);
        void skraHjol(int id, int plass, int bokadir, int timi);
        void prenta();
        ~FerdaStofa();
};