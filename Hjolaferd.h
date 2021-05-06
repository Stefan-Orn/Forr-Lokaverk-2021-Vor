#pragma once
#include "Ferd.h"
//Það er ekki hægt að finna neitt frábrugðið þessum header og flugferða headernum nema það að nafnið og gildið á frumlegu
//breytuni í Hjoldferdunum er annað. Allt annað er eins.
class HjolaFerd : public Ferd{
    private:
        int timi;
    public:
        HjolaFerd();
        HjolaFerd(int id, int plass, int bokadir, int timi);
        int getTimi();
        void setTimi(int timi);
        void prenta();
};