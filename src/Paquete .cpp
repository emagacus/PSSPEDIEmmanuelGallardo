#include "Paquete .h"
#include<iostream>
#include<string>
using namespace std;


Paquete ::Paquete ()
{
    //ctor
}

void Paquete::setDate(LocalDate d){date=d;}
void Paquete::setDiaEntrega(int d,int d2){dias_entrega[0]=d; dias_entrega[1]=d2;}
void Paquete::setPeso(float p){peso=p;}
void Paquete::setDetail(std::string desc){descripcion=desc;}

LocalDate Paquete::getDate(){return date;}
string Paquete::getDiasEntega(){return to_string(dias_entrega[0])+" a "+to_string(dias_entrega[1]);}
float Paquete::getPeso(){return peso;}
std::string Paquete::getDetail(){return descripcion;}

void Paquete::captura()
{
    LocalDate date;
    setDate(date);
    cout<<"fecha: "<<date.ToString()<<endl;
    cout<<"Ingrese Descripcion \n" ;
    fflush(stdin);
    getline(cin,descripcion);
    cout<<"Ingrese Peso \n";
    cin>>peso;
    fflush(stdin);
}


void Paquete::mostrar()
{
  cout<<"----------------------------------------------"<<endl;
  cout<<"Fecha: "<<date.ToString()<<endl;
  cout<<"Descripcion: "<<descripcion<<endl;
  cout<<"Peso: "<<peso<<endl;
  cout<<"Dias de entrega: "<<getDiasEntega()<<endl;
  cout<<"----------------------------------------------"<<endl;
}

string Paquete::ToString()
{

return date.ToString()+'|'+descripcion+'|'+to_string(peso)+' '+to_string(dias_entrega[0])+' '+to_string(dias_entrega[1]);

}

Paquete ::~Paquete ()
{
    //dtor
}
