//Klasainn fyrir bataferðir
#include "batsferd.h"
#include <string>
#include "Ferd.h"

BatsFerd::BatsFerd(){
    this->yfirbyggdur = false;
}
BatsFerd::BatsFerd(int id, int plass, int bokadir, bool yfirbyggdur) : Ferd(id, plass, bokadir){
    this->yfirbyggdur = yfirbyggdur;
}
std::string BatsFerd::getYfir(){
    if(this->yfirbyggdur == 1){
        return "Já";
    }else{
        return "Nei";
    }
}
void BatsFerd::setYfir(bool yfirbyggdur){
    this->yfirbyggdur = yfirbyggdur;
    
}
void BatsFerd::prenta(){
    std::cout
    << "ID: "
    << this->getId()
    << " | Bókaðir: "
    << this->getBokadir()
    << " | Laus Pláss: "
    << this->getPlass()
    << " | Yfirbyggður: "
    << this->getYfir()
    << std::endl;



}