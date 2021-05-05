//Klasinn fyrir ferðastofuna sem vinnur með öll gögnin og prentar þau út
#include <iostream>
#include "FerdaStofa.h"

FerdaStofa::FerdaStofa(){
    this->staerd = 4;
    this->heads = new FerdaNode*[this->staerd];
}
FerdaStofa::FerdaStofa(int defaultstaerd){
    this->staerd = defaultstaerd;
    this->heads = new FerdaNode*[this->staerd];
}
int FerdaStofa::hash(int id){
    return id%this->staerd;
}
void FerdaStofa::skra(Ferd* ferd){
    FerdaNode* nyttNode = new FerdaNode(ferd);
    int index = this->hash(ferd->getId());
    if(!this->heads[index]){
        this->heads[index] = nyttNode;
    }else{
        FerdaNode* current = this->heads[index];
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = nyttNode;
    }

}

void FerdaStofa::skraBatur(int id, int plass, int bokadir, bool yfirbyggdur){
    this->skra(new BatsFerd(id,plass,bokadir,yfirbyggdur));
}
void FerdaStofa::skraFlug(int id, int plass, int bokadir, std::string stadur){
    this->skra(new FlugFerd(id, plass, bokadir, stadur));
}
void FerdaStofa::skraHjol(int id, int plass, int bokadir, int timi){
    this->skra(new HjolaFerd(id,plass,bokadir,timi));
}
void FerdaStofa::prenta(){
    for(int i = 0; i < this->staerd; i++){
        FerdaNode* current = this->heads[i];
        while(current){
            current->ferd->prenta();
            current = current->next;
        }
    }
}
FerdaStofa::~FerdaStofa(){
    FerdaNode* eydaOllu = nullptr;
    for(int i = 0; i < this->staerd; i++){
        while(this->heads[i]){
            this->heads[i] = eydaOllu;
            delete this->heads[i];
            this->heads[i] = eydaOllu;
        }
    }

}