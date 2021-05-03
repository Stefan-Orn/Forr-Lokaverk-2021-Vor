#pragma once
#include <iostream>
#include "Ferd.h"

class BatsFerd : public Ferd{
    private:
        bool yfirbyggdur;        
    public:
        BatsFerd();
        BatsFerd(int id, int plass, int bokadir, bool yfirbyggdur);
        bool getYfir();
        void setYfir(bool yfirbyggdur);
        void prenta();
};