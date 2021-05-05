//Headerinn fyrir bataferðir
#pragma once
#include <string>
#include <iostream>
#include "Ferd.h"
class BatsFerd : public Ferd{
    private:
        bool yfirbyggdur;        
    public:
        BatsFerd();
        BatsFerd(int id, int plass, int bokadir, bool yfirbyggdur);
        std::string getYfir();
        void setYfir(bool yfirbyggdur);
        void prenta();
};