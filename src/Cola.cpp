#include "Cola.h"

Cola::Cola()
{

    //ctor
}

int Cola::count()
{
    return _count;
}

void Cola::Inicializar()
{
    primero= new NodoCola();
    Ultimo=primero;
    _count=0;

}

bool Cola::isEmmpty()
{
    return primero==nullptr;
}

NodoCola* Cola::front()
{
return primero;
}


NodoCola* Cola::back()
{
return Ultimo;
}

void Cola::queue(NodoCola *n)
{
if(!isEmmpty()){

    NodoCola* aux=back();

    Ultimo=n;
    Ultimo->setPrev(aux);
    aux->setNext(n);

   if(count()==0){NodoCola* a=Ultimo->getPrev();delete a;primero=Ultimo;}

    _count++;

    }
     else
        {
         Inicializar();
         queue(n);
      }
}


void Cola::deque()
{
    if(count()>0){
   NodoCola* aux= front()->getNext();
   delete primero;
   primero=aux;

    }
    else
    {
      delete primero;
    }
   _count--;
}


NodoCola* Cola::search(std::string sitem)
{
     NodoCola* aux=front();
     std::string coinc;
     int found;

     while(aux!=nullptr)
     {
         coinc=aux->getPaquete()->getDetail();
         found=coinc.find(sitem);
         if (found!=std::string::npos)
            {
                return aux;
            }

     aux=aux->getNext();

     }

     return nullptr;
}


Cola::~Cola()
{
    //dtor
}
