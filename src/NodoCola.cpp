#include "NodoCola.h"

NodoCola::NodoCola()
{
    paquete=nullptr;
    siguiente=nullptr;
}


Paquete* NodoCola::getPaquete(){return paquete;}

NodoCola* NodoCola::getNext(){return siguiente;}

NodoCola* NodoCola::getPrev(){return anterior;}

void NodoCola::setPaq(Paquete *p){paquete=p;}

void NodoCola::setNext(NodoCola *n){siguiente=n;}

void NodoCola::setPrev(NodoCola *n){anterior=n;}


NodoCola::~NodoCola()
{
    //dtor
}
