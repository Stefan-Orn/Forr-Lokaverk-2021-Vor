// Header skráinn fyrir Ferd
#pragma once
#include <iostream>
// Þetta er grunn klasinn má segja. Allar ferðir sem settar eru í forritið erfa hann. Það gerir hlutina mikið snyrtilegri og minna vesesn.
// Ég includa Ferd.h í öllum klösunum sem að ég útfæri héðan í frá þar sem að það er erfða skipan í þessu forriti.
class Ferd{
    private: // Inn í private hlutanum skilgreini ég breytunar mínar sem eru allar int. Id, Plass og Bokadir
        int id;
        int plass;
        int bokadir; 
    public: // Í public skilgreini ég síðan viðeigandi föll
        Ferd(); // Hér koma smiðirnir fyrir klasann. Þar smíða ég breytunar má segja og gef þeim rétt gildi sem notandinn slær inn
        Ferd(int id, int plass, int bokadir);
        // Síðan eru það getters og setters. Ég þarf að hafa getter og setter fyrir hverja breytu. Get er til að
        // ná í breytuna og set er til þess að setja rétt gildi í hana. Segjir sig sjálft.
        int getId(); 
        void setId(int id);
        int getPlass();
        void setPlass(int plass);
        int getBokadir();
        void setBokadir(int bokadir);
        virtual void prenta() = 0; // = 0 => fallið pure virtual => klasinn er abstract 
        virtual ~Ferd() {}; // Ég þarf hér að láta eins og ég sé að fara skilgreina þetta virtual fell en ég er síðan ekkert
        // að fara að gera neitt við það. Það eins sem að það gerir er að hjálpa mér að fá þennan abstract klasa til þess 
        // að nýta mér erfingar eiginleikana.
};