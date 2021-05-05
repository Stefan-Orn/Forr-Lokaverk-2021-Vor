#include <iostream>
#include <string>
#include <sstream>
#include "FerdaStofa.h"
void ferdir(){
    std::string ferdir[] = {"Flug","Báts","Hjóla"};
    std::cout << "Ferið í boði\n";
    std::cout << "=========\n";
    for(int i = 0; i < 3; i++){
        std::cout <<"| " << ferdir[i] << "ferð" << " | \n";
    }
}
void valMynd(){
    FerdaStofa fs;
    std::string inntak,skipun,ferd,stadur;
    bool yfirbyggt;
    int id, plass, bokadir, timi;
    do{
        std::cout << "Skipulagðu ferð: ";
        getline(std::cin,inntak);
        std::stringstream ss;
        ss << inntak;
        ss >> skipun;
        if(skipun == "skrá"){
            ss >> ferd;
            if(ferd == "hjóla" or ferd == "hjólaferð"){
                ss>>id;
                ss>>plass;
                ss>>bokadir;
                ss>>timi;   
                fs.skraHjol(id,plass,bokadir,timi);
            }else if(ferd == "flug" or ferd == "flugferð"){
                ss>>id;
                ss>>plass;
                ss>>bokadir;
                ss>>stadur;
                fs.skraFlug(id,plass,bokadir,stadur);
            }else if(ferd == "bát" or ferd == "bátsferð"){
                ss>>id;
                ss>>plass;
                ss>>bokadir;
                ss>>yfirbyggt;
                fs.skraBatur(id,plass,bokadir,yfirbyggt);
            }else{
                std::cout << "Við bjóðum ekki upp á svona ferðir!\n";
            }
        }else if(skipun == "prenta"){
            fs.prenta();
        }else if(skipun == "hætta"){
            std::cout << "Bless!\n";
        }else{
            std::cout << "Ég veit ekkert hvað þú áttir við með þessum innslætti!\n";
        }
    }while(skipun != "hætta");
}

int main(){
    FerdaStofa fs; // Skilgreini FerdaStofu klasann sem fs (Python: "nafn klasa" = fs)
    ferdir();
    valMynd();
    // Báta prent
    /***std::cout << "Báta ferðir: \n";
    std::cout << "===========\n";
    fs.pushBatur(907,2,10,false);
    fs.prenta();
    fs.pushBatur(908,20,100,true);
    fs.prenta();
    fs.pushBatur(909,6,8,false);
    fs.prenta();
    std::cout << std::endl;
    // Flugvéla prent
    std::cout << "Flug ferðir: \n";
    std::cout << "===========\n";
    fs.pushFlug(910,180,100,"Mæjorka");
    fs.prenta();
    fs.pushFlug(911,230,50,"NewYork");
    fs.prenta();
    fs.pushFlug(912,23,80,"Ísafjörður");
    fs.prenta();
    std::cout << std::endl;
    // Hjóla prent
    std::cout << "Hjóla ferðir: \n";
    std::cout << "===========\n";
    fs.pushHjol(913,4,5,2);
    fs.prenta();
    fs.pushHjol(914,3,5,2);
    fs.prenta();
    fs.pushHjol(915,1,2,1);
    fs.prenta();
    fs.pushHjol(916,3,5,4);
    fs.prenta();
    fs.pushHjol(917,0,2,1);
    fs.prenta();***/

}
