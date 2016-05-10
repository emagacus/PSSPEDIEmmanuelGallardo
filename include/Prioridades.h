#ifndef PRIORIDADES_H
#define PRIORIDADES_H

#include "Prioridad.h"


class Prioridades
{
    public:

        Prioridad *pAncla;

        Prioridades();

        void addNewPriority(Prioridad *p);


        Prioridad* FindPriority(int idia, int fdia);

        void addNewPackage();
        void showFront();
        void Desencolar();
        void Buscar();

        virtual ~Prioridades();

    protected:
    private:
};

#endif // PRIORIDADES_H
