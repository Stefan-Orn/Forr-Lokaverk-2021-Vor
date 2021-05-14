// Klasinn fyrir Ferd
#include <iostream>
#include "Ferd.h"
// Hér er cpp skráinn fyrir Ferd. Þar útfæri ég öll föllin sem ég hef skilgreint
Ferd::Ferd(){ //Hér byrja ég á því að gefa öllum föllunum default gildi.
    this->id = 0;
    this->plass = 10;
    this->bokadir = 0;
}
Ferd::Ferd(int id, int plass, int bokadir){// Þetta er til þess að ef notandinn slær ekki inn neitt gildi að þá verða defaul
//gildin verði sett inn.
    this->id = id;
    this->plass = plass;
    this->bokadir = bokadir;
}
//Síðan útfæri ég bara getters og setterana. Það er bara frekar einfallt, þegar ég er að getta þá er ég að ná í draslið
// frá þeim stað sem ég er í forritinu svo að ég returna viðeigandi gildi. Í set er ég bara að setja gildi inn í viðeigandi
// breytu.
int Ferd::getId(){
    return this->id;
}
void Ferd::setId(int id){
    this->id = id;
}
int Ferd::getPlass(){
    return this->plass;
}
void Ferd::setPlass(int plass){
    this->plass = plass;
}
int Ferd::getBokadir(){
    return this->bokadir;
}   
void Ferd::setBokadir(int bokadir){
    this->bokadir = bokadir;
}
bool Ferd::boka(int bokun){
    if(bokun >= 0){
        if(bokun + this->bokadir <= this->plass){
            this->bokadir += bokun;
            return true;
        }
    }
    return false;
}
bool Ferd::afboka(int afbokun){
    if(afbokun >= 0){
        if(this->bokadir - afbokun >= 0){
            this->bokadir -= afbokun;
            return true;
        }
    }
    return false;
}
/***void Ferd::prenta(){
    std::cout
    << "ID: "
    << this->id
    << std::endl;
}***/