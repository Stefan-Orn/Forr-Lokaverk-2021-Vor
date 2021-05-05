#include "flugferd.h"

FlugFerd::FlugFerd(){
    this->stadur = "Ógreindur";
}
FlugFerd::FlugFerd(int id, int plass, int bokadir, std::string stadur) : Ferd(id, plass, bokadir){
    this->stadur = stadur;
}
std::string FlugFerd::getStadur(){
    return this->stadur;
}
void FlugFerd::setStadur(std::string stadur){
    this->stadur = stadur;
}
void FlugFerd::prenta(){
    std::cout
    << "ID: "
    << this->getId()
    << " | Bókaðir: "
    << this->getBokadir()
    << " | Laus Pláss: "
    << this->getPlass()
    << " | Áfangastaður: "
    << this->stadur
    << std::endl;
}