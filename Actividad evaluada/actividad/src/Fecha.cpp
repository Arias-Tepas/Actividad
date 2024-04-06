#include "Fecha.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Fecha::Fecha(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->anio = a;
}
Fecha::~Fecha()
{
    //dtor
}
