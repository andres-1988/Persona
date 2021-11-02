#include <iostream>
#include<stdlib.h>
#include<cstring>

using namespace std;

#include "Persona.h"

Persona::Persona()
{
    //ctor
}
void Persona::setNombre(char *nombre)
{
    strcpy(_nombre, nombre);
}
void Persona::setEdad(int edad)
{
    _edad=edad;
}
char *Persona::getNombre()
{
    return _nombre;
}
int Persona::getEdad()
{
    return _edad;
}

void Persona::cargar()
{

    cin.ignore();
    cout<<"ING. NOMBRE: ";
    cin.getline(_nombre, 30,'\n');
    cout<<"ING. EDAD: ";
    cin>>_edad;

}
void Persona::mostrar()
{
    cout<<"\nNOMBRE: "<<_nombre;
    cout<<"\nEDAD: "<<_edad;
}
