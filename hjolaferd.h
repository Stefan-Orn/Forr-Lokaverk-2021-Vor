#pragma once
#include "Ferd.h"

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