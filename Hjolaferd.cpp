#include "hjolaferd.h"
// Alveg eins og flugferð og batsferða klasanir. Þarf ekki að útskýra
HjolaFerd::HjolaFerd(){
    this->timi = 0;
}
HjolaFerd::HjolaFerd(int id, int plass, int bokadir, int timi) : Ferd(id,plass,bokadir){
    this->timi = timi;
}
int HjolaFerd::getTimi(){
    return this->timi;
}
void HjolaFerd::setTimi(int timi){
    this->timi = timi;
}
void HjolaFerd::prenta(){
    std::cout
    << "ID: "
    << this->getId()
    << " | Bókaðir: "
    << this->getBokadir()
    << " | Laus Pláss: "
    << this->getPlass()
    << " | Timi: "
    << this->timi
    << std::endl;
}