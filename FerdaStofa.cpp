#include <iostream>
#include "FerdaStofa.h"

FerdaStofa::FerdaStofa(){
    this->head = nullptr;
    this->tail = nullptr;
}
void FerdaStofa::push(Ferd* ferd){
    FerdaNode* tempNode = new FerdaNode(ferd);
    if(this->head != nullptr){
        this->head->next = tempNode;
        this->head = tempNode;
    }else{
        this->head = tempNode;
        this->tail = tempNode;
    }
}
void FerdaStofa::pushBatur(int id, int plass, int bokadir, bool yfirbyggdur){
    this->push(new BatsFerd(id,plass,bokadir,yfirbyggdur));
}

void FerdaStofa::prenta(){
    FerdaNode* current = this->head;
    while(current){
        current->ferd->prenta();
        current = current->next;
    }
}
FerdaStofa::~FerdaStofa(){
    FerdaNode* eydaOllu = this->head;
    while(this->head){
        eydaOllu = this->head->next;
        delete [] this->head->ferd;
        delete [] this->head;
        this->head = eydaOllu;
    }
}