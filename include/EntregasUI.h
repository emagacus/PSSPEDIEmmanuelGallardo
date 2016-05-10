#ifndef ENTREGASUI_H
#define ENTREGASUI_H
#include "Cola.h"
#include "Prioridades.h"


class EntregasUI
{
    public:

        Prioridades ColaTerrestres;
        Prioridades ColaAereos;

        EntregasUI();

        void CargarDatos();
        void MenuTerrestre();
        void MenuAereo();
        void GuardarDatos();

        virtual ~EntregasUI();
    protected:
    private:
};

#endif // ENTREGASUI_H
