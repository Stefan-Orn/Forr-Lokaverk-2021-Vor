#pragma once
#include <string>
#include "Ferd.h"

class FlugFerd: public Ferd{
    private:
        std::string stadur;
    public:
        FlugFerd();
        FlugFerd(int id, int plass, int bokadir, std::string stadur);
        std::string getStadur();
        void setStadur(std::string stadur);
        void prenta();
};