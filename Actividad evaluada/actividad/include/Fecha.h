#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <stdio.h>
using namespace std;


class Fecha
{
    public:
        Fecha();
        Fecha(int, int, int);
        void mostrarFecha()
        {
            cout << this->dia << "/" << this->mes << "/" << this->anio;
        }
        virtual ~Fecha();
    protected:

    private:
        int dia;
        int mes;
        int anio;
};
#endif // FECHA_H
