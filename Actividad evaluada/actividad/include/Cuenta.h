#ifndef CUENTA_H
#define CUENTA_H
#include "Cliente.h"
#include "Fecha.h"
#include "Abono.h"
#define TAM 5



class Cuenta
{
    public:
        Cuenta();
        Cuenta(int, Cliente *);
        int getNumeroCuenta()
        {
            return this->numeroCuenta;
        }
        void setNumeroCuenta(int nc)
        {
            this->numeroCuenta = nc;
        }
        Cliente *getCliente()
        {
            return this->cliente;
        }
        void setCliente(Cliente *cli)
        {
            this->cliente = cli;
        }
        bool agregarAbono(Abono *ab)
        {
            bool retorno = false;
            if(this->contadorAbonos < TAM){
                this->lstAbonos[this->contadorAbonos] = ab;
                this->contadorAbonos++;
                this->saldo -= ab->getMontoAbono();
                retorno = true;
            }
            return retorno;
        }
        Abono **getLstAbonos()
        {
            return this->lstAbonos;
        }
        float getSaldo()
        {
            return this->saldo;
        }
        int getContadorAbonos()
        {
            return this->contadorAbonos;
        }


        virtual ~Cuenta();
    protected:

    private:
        int numeroCuenta;
        Cliente *cliente;
        Abono *lstAbonos[TAM];
        float saldo;
        int contadorAbonos;

};
#endif // CUENTA_H
