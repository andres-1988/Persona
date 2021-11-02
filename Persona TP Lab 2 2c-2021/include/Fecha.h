#ifndef FECHA_H
#define FECHA_H

class Fecha
{
    public:
        Fecha();
        //Fecha(int dia, int mes, int anio);
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        int getDia();
        int getMes();
        int getAnio();

       // void cargar();
        void mostrar();

    protected:

    private:
        int _dia;
        int _mes;
        int _anio;
};

#endif // FECHA_H
