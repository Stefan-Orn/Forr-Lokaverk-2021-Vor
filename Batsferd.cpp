//Klasainn fyrir bataferðir
#include "batsferd.h"
#include <fstream>
#include <string>
#include "Ferd.h"
using namespace std;
// Hérna geri ég ekki annað en að gefa breytum og föllum viðeigandi gildi. Alveg eins og í ferd.cpp.
BatsFerd::BatsFerd(){
    this->yfirbyggdur = false;
}
BatsFerd::BatsFerd(int id, int plass, int bokadir, bool yfirbyggdur) : Ferd(id, plass, bokadir){
    this->yfirbyggdur = yfirbyggdur;
}
std::string BatsFerd::getYfir(){ //Þar sem að yfirbyggdur er bool fall sem tekur inn true eða false (0 eða 1) en ég vill
//að prentað verðið já eða nei. Þá nota ég getYfir fallið til þess að returna annaðhvort já eða nei eftir því hvort að 
// notandinn setur inn true eða false.
    if(this->yfirbyggdur == 1){
        return "Já";
    }else{
        return "Nei";
    }
}
void BatsFerd::setYfir(bool yfirbyggdur){
    this->yfirbyggdur = yfirbyggdur;
    
}
void BatsFerd::prenta(){ // Prenta fallið prentar út bátsferðina á flottan hátt. Það notfærir sér nokkur föll úr Ferd klasanum
//sem eru getId, getBokadir og getPlass þar sem að við erum búnir að erfa hann. Mjög sniðugt.
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
    ofstream skrifa("bokanir.txt", fstream::app);
    if(!skrifa){
        cout << "Ekki er til slík skrá!\n";
    }else{
        skrifa << " " << this->getId() << " " << this->getBokadir() << " " << this->getPlass() << " " << this->getYfir() << endl;   
    }

}