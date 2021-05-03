#pragma once
#include <iostream>
#include "FerdaNode.h"
#include "batsferd.h"

class FerdaStofa{
    private:
        FerdaNode* head;
        FerdaNode* tail;
        void push(Ferd* ferd);
    public: 
        FerdaStofa();
        void pushBatur(int id, int plass, int bokadir, bool yfirbyggdur);
        void prenta();
        ~FerdaStofa();
};