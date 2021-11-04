#ifndef MENU_H
#define MENU_H

#include"Persona.h"
#include "Fecha.h"

class Menu
{
public:
    Menu();

    void hacer();
    Persona setNombre();
    Persona getNombre();
    Fecha cargarFecha();
    Fecha mostrarFecha();
    //Persona cargar();
    //Persona mostrar();


protected:

private:
    Persona _persona;
    Fecha _fecha;
};

#endif // MENU_H
