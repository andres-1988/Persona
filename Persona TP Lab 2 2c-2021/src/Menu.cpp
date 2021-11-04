#include <iostream>

using namespace std;

#include "Menu.h"
#include"Persona.h"
#include"Fecha.h"

Menu::Menu()
{
    //ctor
}
void Menu::hacer()
{
    char nombre[30];
    cout<<"NOMBRE: ";
    cin.getline(nombre,30,'\n');
    _persona.setNombre(nombre);
    _fecha.cargarFecha();
    cout<<endl;
    cout<<_persona.getNombre()<<endl;;
    _fecha.mostrarFecha();
    //_persona.cargar();
    //_persona.mostrar();
}



