#ifndef ABONO_H
#define ABONO_H
#include <iostream>
#include <stdio.h>
#include "Fecha.h"

class Abono
{
    public:
        Abono();
        Abono(Fecha *, float);
        Fecha *getFechaAbono()
        {
            return this->fechaAbono;
        }
        float getMontoAbono()
        {
            return this->montoAbono;
        }
        virtual ~Abono();
    protected:
    private:
        Fecha *fechaAbono;
        float montoAbono;
};
#endif // ABONO_H
