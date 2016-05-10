#ifndef PRIORIDAD_H
#define PRIORIDAD_H
#include "Cola.h"


class Prioridad
{
    public:
        Prioridad(int a,int b);
        Prioridad();

        Cola *cola;
        void setRange(int ini, int fin);
        void setNextPriority(Prioridad *s);
        Prioridad* getNext();
        int InicioRango();
        int finRango();

        virtual ~Prioridad();

    protected:
    private:

     int range[2];
     Prioridad* siguiente;

};


#endif // PRIORIDAD_H
