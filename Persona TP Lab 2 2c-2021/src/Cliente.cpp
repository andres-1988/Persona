#include <iostream>
#include <cstdio>

using namespace std;

#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
}

Fecha Cliente::getFecha()
{
    return _fecha;
}



/*void Cliente::setFecha(Fecha fecha)
{

    _fecha=fecha;
}*/

void Cliente::setIDreunion(int IDreunion)
{
    _IDreunion=IDreunion;
}

int Cliente::getIDreunion()
{
    return _IDreunion;
}

void Cliente::setNumMesa(int numMesa)
{
    _numMesa=numMesa;
}
void Cliente::setCantComenzales(int cantComenzales)
{
    _cantComenzales=cantComenzales;
}
int Cliente::getNumMesa()
{
    return _numMesa;
}
int Cliente::getCantComenzales()
{
    return _cantComenzales;
}

void Cliente::cargar()
{
    Persona::cargar();
    cout<<"ING. NUM. DE ID: ";
    cin>>_IDreunion;
    cout<<"ING. NUM. DE MESA: ";
    cin>>_numMesa;
    cout<<"ING. CANT. DE COMENZALES: ";
    cin>>_cantComenzales;
    int dia, mes, anio;
    //cin >> dia >> mes >> anio;
    cout<<"\nCARGAR FECHA CON EL FORMATO DD/MM/AA: "<<endl;
    cout<<"INGRESE DIA: ";
    cin>>dia;
    cout<<"INGRESE MES: ";
    cin>>mes;
    cout<<"INGRESE ANIO: ";
    cin>>anio;
    _fecha.setDia(dia);
    _fecha.setMes(mes);
    _fecha.setAnio(anio);
}
void Cliente::mostrar()
{
    Persona::mostrar();
    cout<<"\nNUM. DE ID: "<<_IDreunion<<endl;
    cout<<"ES LA MESA NUM: "<<_numMesa<<endl;
    cout<<"LA CANT. DE COMENZALES ES: "<<_cantComenzales<<endl;
    _fecha.mostrar();
}

bool Cliente::guardarEnDisco()
{
    Cliente aux;

    FILE *p;
    p = fopen("cliente.dat", "ab");
    if (p == NULL)
    {
        return false;
    }
    bool ok;
    ok = fwrite(this, sizeof(Cliente), 1, p);
    fclose(p);
    return ok;
}

bool Cliente::leerDeDisco(int nroRegistro)
{
    Cliente aux;

    FILE *p;
    p = fopen("cliente.dat", "rb");
    if (p == NULL)
    {
        return false;
    }
    fseek(p, nroRegistro * sizeof(Cliente), SEEK_SET);
    bool ok;
    ok = fread(this, sizeof(Cliente), 1, p);
    fclose(p);
    return ok;
}


///FUNCION GLOBAL

int cantidadReuniones()
{
    int bytes, cant;
    FILE *p;
    p = fopen("cliente.dat", "rb");
    if (p == NULL)
    {
        return 0;
    }
    fseek(p, 0, SEEK_END);
    bytes = ftell(p);
    fclose(p);
    cant = bytes / sizeof(Cliente);
    return cant;
}

int buscarReunion(int ID)
{
    Cliente reg;

    int i, cant = cantidadReuniones();
    for(i =0; i<cant; i++)
    {
        reg.leerDeDisco(i);
        if (ID == reg.getIDreunion())
        {
            return i;
        }
    }
    return -1;
}
