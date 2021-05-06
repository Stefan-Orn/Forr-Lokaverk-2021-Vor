//Headerinn fyrir bataferðir
#pragma once
#include <string>
#include <iostream>
#include "Ferd.h"
class BatsFerd : public Ferd{ // Þetta er batsferða kalsinn sem smíðar bátsferðinar. Hann erfir Ferd klasann
// til þess að fá id,plass og bokadir inn. Þetta spara mikinn tíma og vinnsluminni.
    private: // Í private hlutanum bý ég til viðeigandi breytu sem er eina frumlega breytan í batsferdar klasanum
    // ef ég væri ekki að erfa Ferd klasan þyrfti ég að búa til id, plass og bokadir hér allt upp á nýtt.
        bool yfirbyggdur; 
    public: // Í public bý ég til öll föllin sem eru aðgengi leg allstaðar innan forritsins. Hér eru smiðir, getters og setters
    // og prenta fallið. Flóknara er það ekki.
        BatsFerd();
        BatsFerd(int id, int plass, int bokadir, bool yfirbyggdur);
        std::string getYfir();
        void setYfir(bool yfirbyggdur);
        void prenta();
};