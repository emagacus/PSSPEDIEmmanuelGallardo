#include "EntregasUI.h"

#include<iostream>
#include<fstream>
using namespace std;


EntregasUI::EntregasUI()
{
    //ctor
}


void EntregasUI::CargarDatos()
{

  Prioridad *p=new Prioridad(1,2);
  p->cola->Inicializar();
  ColaTerrestres.addNewPriority(p);

  Prioridad *p1=new Prioridad(2,5);
  p1->cola->Inicializar();
  ColaTerrestres.addNewPriority(p1);

  Prioridad *pa=new Prioridad(1,1);
  pa->cola->Inicializar();
  ColaAereos.addNewPriority(pa);

  Prioridad *pa1=new Prioridad(1,2);
  pa1->cola->Inicializar();
  ColaAereos.addNewPriority(pa1);

  ifstream ifile;
  string fileName;

  Prioridad* paux=ColaTerrestres.pAncla;

            string _fecha,_desc;
            float _peso;
            int _ini,_fin;

  while(paux!=nullptr)
    {
        fileName="PTerrestres_"+to_string(paux->InicioRango())+to_string(paux->finRango())+".txt";
        ifile.open(fileName);

        while(!ifile.eof())
            {

            NodoCola* nodo=new NodoCola();

            getline(ifile,_fecha,'|');
            getline(ifile,_desc,'|');
            ifile>>_peso;
            ifile>>_ini;
            ifile>>_fin;


            if(ifile.eof()){break;}

            Paquete* paq=new Paquete();
            paq->setDetail(_desc);
            paq->setPeso(_peso);
            paq->setDiaEntrega(_ini,_fin);

            nodo->setPaq(paq);
            paux->cola->queue(nodo);



            }

        ifile.close();
        paux=paux->getNext();
    }

    ///***Cargando Paquetes aereos

    paux=ColaAereos.pAncla;

       while(paux!=nullptr)
    {
        fileName="PAereos_"+to_string(paux->InicioRango())+to_string(paux->finRango())+".txt";
        ifile.open(fileName);

        while(!ifile.eof())
            {

            NodoCola* nodo=new NodoCola();

            getline(ifile,_fecha,'|');
            getline(ifile,_desc,'|');
            ifile>>_peso;
            ifile>>_ini;
            ifile>>_fin;


            if(ifile.eof()){break;}

            Paquete* paq=new Paquete();
            paq->setDetail(_desc);
            paq->setPeso(_peso);
            paq->setDiaEntrega(_ini,_fin);

            nodo->setPaq(paq);
            paux->cola->queue(nodo);



            }

        ifile.close();
        paux=paux->getNext();
    }





}


void EntregasUI::MenuTerrestre()
{



    int opc; string s;
    do{

    cout<< "\n\n PAQUETES TERRESTRES \n"<<endl;
    cout<<"\n1. AGREGAR. "<<endl;
    cout<<"\n2. VER. "<<endl;
    cout<<"\n3. BUSCAR. "<<endl;
    cout<<"\n4. ELIMINAR. \n"<<endl;
    cout<<"\n5. SALIR. \n"<<endl;

    fflush(stdin);

    getline(cin,s);
    system("cls");

    try
    {
    opc=stoi(s);
    }catch(invalid_argument){opc==0;}


    switch(opc)
    {
case 1:

     ColaTerrestres.addNewPackage();
     break;

case 2:

     ColaTerrestres.showFront();
    break;

case 3:

    ColaTerrestres.Buscar();

    break;

case 4:

    ColaTerrestres.Desencolar();

    break;

case 5:

    break;

default:
    cout<<"\n\n Opcion Incorrecta \n";
    system("pause");
    system("cls");

    break;
    }
    }while(opc!=5);

}


void EntregasUI::MenuAereo()
{


    int opc;string s;
    do{

    cout<< "\n\n PAQUETES AEREOS \n"<<endl;
    cout<<"\n1. AGREGAR. "<<endl;
    cout<<"\n2. VER. "<<endl;
    cout<<"\n3. BUSCAR. "<<endl;
    cout<<"\n4. ELIMINAR. \n"<<endl;
    cout<<"\n5. SALIR. \n"<<endl;
    fflush(stdin);
    getline(cin,s);
    system("cls");

    try
    {
    opc=stoi(s);
    }catch(invalid_argument){opc==0;}



    switch(opc)
    {
case 1:
    ColaAereos.addNewPackage();
    break;
case 2:
    ColaAereos.showFront();
    break;
case 3:
    ColaAereos.Buscar();
    break;
case 4:
    ColaAereos.Desencolar();
    break;
case 5:
    break;

default:
    cout<<"\n\n Opcion Incorrecta \n";
    system("pause");
    system("cls");

    break;
    }
    }while(opc!=5);

}


void EntregasUI::GuardarDatos()
{

    ofstream file;
    string fileName;

   Prioridad *paux=ColaTerrestres.pAncla;

   while(paux!=nullptr)
    {
        fileName="PTerrestres_"+to_string(paux->InicioRango())+to_string(paux->finRango())+".txt";
        file.open(fileName);


         if(paux->cola->count()>0){


        NodoCola* aux=paux->cola->front();

        while(aux!=nullptr)
            {

            file<<aux->getPaquete()->ToString()<<'\n';

            aux=aux->getNext();
            }




         }//fin

         file.close();
         paux=paux->getNext();
    }


   ///***GUARDANDO PAQUETES AEREOS

   paux=ColaAereos.pAncla;

   while(paux!=nullptr)
    {
        fileName="PAereos_"+to_string(paux->InicioRango())+to_string(paux->finRango())+".txt";
        file.open(fileName);

         if(paux->cola->count()>0){


        NodoCola* aux=paux->cola->front();

        while(aux!=nullptr)
            {

            file<<aux->getPaquete()->ToString()<<'\n';

            aux=aux->getNext();
            }




         }//fin
        file.close();

         paux=paux->getNext();
    }


}

EntregasUI::~EntregasUI()
{
    //dtor
}
