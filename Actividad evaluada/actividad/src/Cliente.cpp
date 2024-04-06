#include "Cliente.h"
#include <string.h>
#include <iostream>
#include <stdio.h>

Cliente::Cliente(int id, string n, string a){
    this->idCliente = id;
    this->nombre = n;
    this->apellido = a;
}
Cliente::~Cliente()
{
    //dtor
}
