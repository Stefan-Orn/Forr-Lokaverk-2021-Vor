//Þetta er 
#pragma once
#include <iostream>
#include "FerdaNode.h"
#include "batsferd.h"
#include "flugferd.h"
#include "hjolaferd.h"

class FerdaStofa{
    private:
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