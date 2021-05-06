#pragma once
#include <string>
#include "Ferd.h"
//Þetta er alveg eins og bátsferða klasinn. Ég erfi hér Ferd klasann svo að einu breytunar sem ég þarf að búa til hér
//er sadur breyta þar sem að hún á ekkert sameiginlegt með hinum ferðunum. Annars er allt eins og í batsferda headernum.
class FlugFerd: public Ferd{
    private:
        std::string afangaStadur;
    public:
        FlugFerd();
        FlugFerd(int id, int plass, int bokadir, std::string afangaStadur);
        std::string getStadur();
        void setStadur(std::string afangaStadur);
        void prenta();
};