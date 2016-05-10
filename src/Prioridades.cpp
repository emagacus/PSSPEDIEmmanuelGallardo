#include "Prioridades.h"
#include<iostream>
using namespace std;

Prioridades::Prioridades()
{
    pAncla=nullptr;
    //ctor
}


Prioridad* Prioridades::FindPriority(int idia,int fdia)
{

  Prioridad* aux=pAncla;

  while(aux!=nullptr)
  {
     if(aux->InicioRango()==idia && aux->finRango()==fdia)
        {
        return aux;
        }
  aux=aux->getNext();
  }

   return nullptr;
}


void Prioridades::addNewPriority(Prioridad *p)
{

    if(pAncla==nullptr){pAncla=p;}else{

    Prioridad* aux=pAncla;

      while(aux->getNext()!=nullptr)
        {
          aux=aux->getNext();
        }

      aux->setNextPriority(p);
    }
}


void Prioridades::addNewPackage()
{
    int a,b;

   cout<<"Ingrese rango de entrega del paquete "<<endl;
   cout<<" DE: \n";cin>>a;//fflush(stdin);
   cout<<" A: \n";cin>>b;//fflush(stdin);
   cout<<"  DIAS"<<endl;

   Prioridad* aux=FindPriority(a,b);

   if(aux==nullptr)
   {
     cerr<<"No se ha encontrado prioridad \n";
   }else
   {
   // cout<<"dir cola: "<<aux->cola<<endl;

   Paquete* paq=new Paquete();
   NodoCola* nodopaq=new NodoCola();
   paq->captura();
   paq->setDiaEntrega(a,b);
   nodopaq->setPaq(paq);
   aux->cola->queue(nodopaq);

   }

}

 void Prioridades::showFront()
 {
    int a,b;

   cout<<"Ingrese rango de entrega del paquete "<<endl;
   cout<<" DE: \n";cin>>a;//fflush(stdin);
   cout<<" A: \n";cin>>b;//fflush(stdin);
   cout<<"  DIAS"<<endl;

   Prioridad* aux=FindPriority(a,b);

   if(aux==nullptr)
   {
     cerr<<"No se ha encontrado prioridad \n";
   }else
   {

      if(aux->cola->count()>0){
    aux->cola->front()->getPaquete()->mostrar();
      }
   }

 }


void Prioridades::Desencolar()
{
  int a,b;

   cout<<"Ingrese rango de entrega del paquete "<<endl;
   cout<<" DE: \n";cin>>a;//fflush(stdin);
   cout<<" A: \n";cin>>b;//fflush(stdin);
   cout<<"  DIAS"<<endl;

   Prioridad* aux=FindPriority(a,b);

   if(aux==nullptr)
   {
     cerr<<"No se ha encontrado prioridad \n";
   }else
   {
       if(aux->cola->count()>0){
    aux->cola->deque();
       }else{cerr<<"La cola esta vacia! \n";system("pause");system("cls");}
   }

}

void Prioridades::Buscar()
{
int a,b;

   cout<<"Ingrese rango de entrega del paquete "<<endl;
   cout<<" DE: \n";cin>>a;//fflush(stdin);
   cout<<" A: \n";cin>>b;//fflush(stdin);
   cout<<"  DIAS"<<endl;

   Prioridad* aux=FindPriority(a,b);

   if(aux==nullptr)
   {
     cerr<<"No se ha encontrado prioridad \n";
   }else
   {
      string sitem;

if(aux->cola->count()>0){
      cout<<"Descripcion del Paquete que desea encontrar: \n";
      fflush(stdin);
      getline(cin,sitem);

      NodoCola* aux1=aux->cola->search(sitem);

      if(aux1!=nullptr){system("cls");aux1->getPaquete()->mostrar();system("pause");}else{cout<<"No se encontro! \n";system("pause");}
                      }else{cerr<<"\n La cola esta vacia!"<<endl;system("pause");system("cls"); }
   }


}


Prioridades::~Prioridades()
{
    //dtor
}
