#include "Abono.h"
#include "Fecha.h"
#include "Cuenta.h"
#include <stdlib.h>

using namespace std;

Abono::Abono(Fecha *fa, float ma){
    this->fechaAbono = fa;
    this->montoAbono = ma;
}

Abono::~Abono()
{
    //dtor
}
