#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;


class Cliente
{
    public:
        Cliente();
        Cliente(int, string, string);
        int getIdCliente()
        {
            return this->idCliente;
        }
        string getNombre()
        {
            return this->nombre;
        }
        string getApellido()
        {
            return this->apellido;
        }
        virtual ~Cliente();
    protected:

    private:
        int idCliente;
        string nombre;
        string apellido;
};

#endif // CLIENTE_H
