#include<iostream>
#include<sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

string convertiratexto(float f);

#define SIN_TIPO string

void mostrarMesaDisponible(SIN_TIPO mesa[]);
void tomarMesa(string mesa[]);

void mostrarMesaDisponible(SIN_TIPO mesa[])
{
    int c;

    cout << "*************************************" << endl;
    cout << "        Asientos disponibles" << endl;
    cout << "*************************************" << endl;
    for (c=0; c<=10; c++)
    {
        cout<<mesa[c]<<" - ";
    }
    cout<<endl;

    for (c=11; c<=19; c++)
    {
        cout<<mesa[c]<<" - ";
    }

    cout<<endl;

}

void tomarMesa(string mesa[])
{

    bool mesaVacia;
    int cantMesas;
    int i;
    int numMesa;

    cout << "Cuantas mesas desea tomar? " << endl;
    cin >> cantMesas;
    for (i=0; i<=cantMesas-1; i++)
    {
        mesaVacia = false;
        do
        {
            cout << "Ingrese el numero de mesa: " << endl;
            cin >> numMesa;
            if (mesa[numMesa-1]=="X")
            {
                cout << "Esta mesa se encuentra ocupada. Intente nuevamente" << endl;
            }
            else
            {
                mesaVacia = true;
                mesa[numMesa-1] = "X";
                cout << "Asiento " << numMesa << " asignado exitosamente" << endl;
            }
        }
        while (mesaVacia!=true);
    }

}

int main()
{

    string mesa[20];
    int c;

    int eleccion;

    for (c=0; c<=19; c++)
    {
        mesa[c] = convertiratexto(c+1);

    }
    //while (1==1)

    mostrarMesaDisponible(mesa);

    cout<<"\nDESEA ELEGIR UNA MESA (SI = 1 / NO = 0): ";
    cin>>eleccion;
    cout<<endl;


    while(eleccion != 0)
    {
        tomarMesa(mesa);
        mostrarMesaDisponible(mesa);
        cout<<"\nDESEA TOMAR OTRA MESA (SI = 1 / NO = 0): ";
        cin>>eleccion;
        cout<<endl;
    }

    return 0;
}


string convertiratexto(float f)
{
    stringstream ss;
    ss << f;
    return ss.str();
}

