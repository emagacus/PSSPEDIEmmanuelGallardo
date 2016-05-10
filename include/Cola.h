#ifndef COLA_H
#define COLA_H
#include<string>
#include "NodoCola.h"

class Cola
{
    public:

        Cola();

        int count();
        NodoCola* front();
        NodoCola* back();

        void queue(NodoCola *n);
        void deque();
        NodoCola* search(std::string sitem);

        void Inicializar();
        bool isEmmpty();
        void Print();

        virtual ~Cola();

    private:
        int _count;
        NodoCola* primero;
        NodoCola* Ultimo;

};

#endif // COLA_H
