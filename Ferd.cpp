#include <iostream>
#include "Ferd.h"

Ferd::Ferd(){
    this->id = 0;
    this->plass = 10;
    this->bokadir = 0;
}
Ferd::Ferd(int id, int plass, int bokadir){
    this->id = id;
    this->plass = plass;
    this->bokadir = bokadir;
}
int Ferd::getId(){
    return this->id;
}
void Ferd::setId(int id){
    this->id = id;
}
int Ferd::getPlass(){
    return this->plass;
}
void Ferd::setPlass(int plass){
    this->plass = plass;
}
int Ferd::getBokadir(){
    return this->bokadir;
}   
void Ferd::setBokadir(int bokadir){
    this->bokadir = bokadir;
}

/***void Ferd::prenta(){
    std::cout
    << "ID: "
    << this->id
    << std::endl;
}***/