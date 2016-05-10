#ifndef PAQUETE _H
#define PAQUETE _H

#include<string>
#include "LocalDate.h"

class Paquete
{
    public:
        Paquete ();

        void setDate(LocalDate d);
        void setDiaEntrega(int d,int d2);
        void setPeso(float p);
        void setDetail(std::string desc);
        void captura();
        void mostrar();

        LocalDate getDate();
        std::string getDiasEntega();
        float getPeso();
        std::string getDetail();
        std::string ToString();

        virtual ~Paquete ();
    protected:
    private:
        std::string descripcion;
        LocalDate date;
        int dias_entrega[2];
        float peso;

};

#endif // PAQUETE _H
