#include "flugferd.h"
// til þess að vera ekki að skrifa fullt af óþarfa kommentum þá segi ég bara hér að þetta er alveg eins og batsferda klasinn
//nema það að hér eru öðruvísi nafn á frumlegu breytuni og annað gildi (str). Síðan er ég ekki að fikta einhvað í 
// getStadur fallinu eins og ég fiktaði í getYfir fallinu í batsferda klasanum þar sem að það vandamál dvelur ekki hér.
FlugFerd::FlugFerd(){
    this->afangaStadur = "Ógreindur";
}
FlugFerd::FlugFerd(int id, int plass, int bokadir, std::string afangaStadur) : Ferd(id, plass, bokadir){
    this->afangaStadur = afangaStadur;
}
std::string FlugFerd::getStadur(){
    return this->afangaStadur;
}
void FlugFerd::setStadur(std::string afangaStadur){
    this->afangaStadur = afangaStadur;
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
    << this->afangaStadur
    << std::endl;
}