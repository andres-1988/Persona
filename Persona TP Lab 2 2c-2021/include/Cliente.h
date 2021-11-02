#ifndef CLIENTE_H
#define CLIENTE_H

#include"Persona.h"
#include "Fecha.h"

class Cliente: public Persona
{
    public:
        Cliente();

        Fecha getFecha();
        void setFecha(Fecha fecha);

        void setIDreunion(int IDreunion);
        int getIDreunion();

        void setNumMesa(int numMesa);
        void setCantComenzales(int cantComenzales);

        int getNumMesa();
        int getCantComenzales();

        void mostrar();
        void cargar();

        bool guardarEnDisco();
        bool leerDeDisco(int numRegistro);

        //bool buscarEnDisco(int numRegistro);

    protected:

    private:
        Fecha _fecha;
        int _IDreunion;
        int _numMesa;
        int _cantComenzales;
        int numRegistro;
        //int _cantMesas;
};

///FUNCION GLOBAL

int cantidadReuniones();
int buscarReunion(int ID);

#endif // CLIENTE_H
