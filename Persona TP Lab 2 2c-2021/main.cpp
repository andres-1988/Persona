#include <iostream>
#include<stdlib.h>
#include<cstring>
#include <cstdio>

#include"Persona.h"
#include "Cliente.h"
#include "Fecha.h"

using namespace std;

int main()
{
    Cliente reg;

    /*for (int i=0;i<2;i++)
    {
        reg.leerDeDisco(i);
        reg.mostrar();
        reg.cargar();
        reg.guardarEnDisco();
    }*/

   int i=0, cant = cantidadReuniones();
    cout << "Listado con un for" << endl;
    cout << "-------------------------------" << endl;
    for(i =0; i<cant; i++)
    {
        reg.leerDeDisco(i);
        reg.mostrar();
    }
/*
 int ID, p;
    cout << "ID a buscar: ";
    cin >> ID;

    p = buscarReunion(ID);

    if (p >= 0){
        r.leerDeDisco(p);
        r.mostrar();
    }
    else{
        cout << "No existe el registro con ID " << ID << endl;
    }
*/


    return 0;
}
