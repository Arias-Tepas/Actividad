#include "Cuenta.h"

Cuenta::Cuenta()
{
    this->numeroCuenta = 0;
    this->saldo = 0;
    this->contadorAbonos = 0;
}
Cuenta::Cuenta(int nc, Cliente *cli){
    this->numeroCuenta = nc;
    this->cliente = cli;
}

Cuenta::~Cuenta()
{
    //dtor
}
