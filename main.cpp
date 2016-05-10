#include <iostream>
//#include<iomanip>
#include "EntregasUI.h"
using namespace std;


int main()
{
    EntregasUI ui;
    ui.CargarDatos();


    int opc;string s;
    do{

    cout<< "\n\n PAQUETERIA \n"<<endl;
    cout<<"\n1. PAQUETES TERRESTRES. "<<endl;
    cout<<"\n2. PAQUETES AEREOS. "<<endl;
    cout<<"\n3. SALIR. \n"<<endl;

    getline(cin,s);
    system("cls");

    try
    {
    opc=stoi(s);
    }catch(invalid_argument){opc==0;}



    switch(opc)
    {
case 1:
    ui.MenuTerrestre();
    break;
case 2:
    ui.MenuAereo();
    break;
case 3:
    cout<<"Saliendo...";
    break;
default:
    cout<<"\n\n Opcion Incorrecta \n";
    system("pause");
    system("cls");

    break;
    }
    }while(opc!=3);

    ui.GuardarDatos();
    return 0;
}

/*

int main()
{
    cola cola1;
    Paquete paq;
    float peso=1;

    paq.setPeso(peso);
    cola1.Inicializar();
    NodoCola *n=new NodoCola;
    n->setPaq(paq);

    NodoCola *m=new NodoCola;
    peso=2;
    paq.setPeso(peso);
    m->setPaq(paq);

    peso=3;
    NodoCola *o=new NodoCola;
    paq.setPeso(peso);
    o->setPaq(paq);

     peso=4;
    NodoCola *p=new NodoCola;
    paq.setPeso(peso);
    p->setPaq(paq);

     cout<<"count"<<cola1.count()<<endl;

    cola1.queue(n);
     cout<<"count"<<cola1.count()<<endl;

    cout<<"\n first"<<cola1.front()<<endl;
    cout<<"back"<<cola1.back();

    cola1.queue(m);
     cout<<"count"<<cola1.count()<<endl;
    cola1.queue(o);

    cola1.queue(p);

    cola1.deque();


    cout<<cola1.front()->getPaquete().getPeso();
    cout<<cola1.front()->getNext()->getPaquete().getPeso();
    cout<<cola1.front()->getNext()->getNext()->getPaquete().getPeso();
    //cout<<cola1.front()->getNext()->getNext()->getNext()->getPaquete().getPeso();
    cout<<cola1.back()->getPaquete().getPeso();



    cout<<"\n first"<<n<<endl;
    cout<<"back"<<cola1.back();

}
*/
