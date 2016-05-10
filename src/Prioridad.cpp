#include "Prioridad.h"



Prioridad::Prioridad()
{
     siguiente=nullptr;
}

Prioridad::Prioridad(int a,int b)
{
    //ctor
     cola=new Cola();
    siguiente=nullptr;
    range[0]=a;
    range[1]=b;

}

int Prioridad::InicioRango()
{
   return range[0];
}


int Prioridad::finRango()
{
    return range[1];
}




Prioridad* Prioridad::getNext()
{
    return siguiente;
}

void Prioridad::setRange(int ini, int fin)
{
range[0]=ini;
range[1]=fin;
}

void Prioridad::setNextPriority(Prioridad *s)
{
siguiente=s;
}


Prioridad::~Prioridad()
{
    //dtor
}
