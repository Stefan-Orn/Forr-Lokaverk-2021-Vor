#pragma once
#include <iostream>

class Ferd{
    private:
        int id;
        int plass;
        int bokadir;
    public:
        Ferd();
        Ferd(int id, int plass, int bokadir);
        int getId();
        void setId(int id);
        int getPlass();
        void setPlass(int plass);
        int getBokadir();
        void setBokadir(int bokadir);
        virtual void prenta() = 0; // = 0 => fallið pure virtual => klasinn er abstract 
        virtual ~Ferd() {};
};