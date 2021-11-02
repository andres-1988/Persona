#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        Persona();
        void setNombre(char *nombre);
        void setEdad(int edad);
        char *getNombre();
        int getEdad();

        void cargar();
        void mostrar();

    protected:

    private:
        char _nombre[30];
        int _edad;

};

#endif // PERSONA_H
