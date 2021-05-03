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

};