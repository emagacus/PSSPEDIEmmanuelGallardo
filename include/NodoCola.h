#ifndef NODOCOLA_H
#define NODOCOLA_H
#include "Paquete .h"

class NodoCola
{
    public:
        NodoCola();


        Paquete* getPaquete();
        NodoCola* getNext();
        NodoCola* getPrev();

        void setPaq(Paquete *p);
        void setNext(NodoCola *n);
        void setPrev(NodoCola *n);

         Paquete* paquete;

        virtual ~NodoCola();
    protected:
    private:

        NodoCola* anterior;
        NodoCola* siguiente;

};

#endif // NODOCOLA_H
