//Hér er nódan sem ég notfæri mér til að skrá inn ferð.
#pragma once
#include <iostream>
#include "Ferd.h"

struct FerdaNode{
    Ferd* ferd;
    FerdaNode* next;

    FerdaNode(Ferd* f){
        this->ferd=f;
        this->next = nullptr;
    }
    ~FerdaNode(){
        delete this->ferd;
    }
};