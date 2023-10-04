#pragma once
#include<iostream>
#include "Software.h"

using namespace std;


class Produccion :public Software{

private:
string tipoSolucion;
public:
Produccion(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo,string _tipoSolucion)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
this->tipoSolucion=_tipoSolucion;
}
~Produccion(){}
string getTipoProduccion(){
    return this->tipoSolucion;
}
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()<<endl;
}
};