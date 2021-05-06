//Hér er nódan sem ég notfæri mér til að skrá inn ferð.
#pragma once
#include <iostream>
#include "Ferd.h"
// Nódan má sjá sem eina ferð. Það geymir ferðina sem notandinn skráir inn og setur hana í listann sem ég geymi allt í
// Það einfaldar vinnslu töluvert
struct FerdaNode{ // Í svona node er notað struct. Þá er ekki verið að nota klasa sem þarf að útfæra í cpp skrá þetta er
// bara header fall sem er notað yfrir allt forritið.
    Ferd* ferd; // Ég bý til pointer af ferð klasanum sem er setur öll grunn töginn saman, id, plass og bokadir.
    FerdaNode* next; // Þetta er galdra kall. Það er hægt að nýta þetta í svo margt. Þetta er pointer sem að 
    // bendir á næstu nodu í t.d. lista og er notað til þess að t.d. prenta út og finna laust pláss í lista o.s.frv

    FerdaNode(Ferd* f){ // Hérna er node fallið sem er bara að gefa breytunum viðeigandi gildi
        this->ferd=f;
        this->next = nullptr;
    }
    ~FerdaNode(){ // Það þarf að vera destructor í svona node til þess að skilja ekki eftir sig drasl.
        delete this->ferd;
    }
};