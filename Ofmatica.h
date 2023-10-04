#pragma once
#include<iostream>
#include "Software.h"
using namespace std;

class Ofmatica :public Software{

private:
int cantidadArchivos;

public:
Ofmatica (string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
    this->cantidadArchivos=0;
}
void aumentarArchivos(){
    this->cantidadArchivos ++;
}
void eliminarArchivos(){
    this->cantidadArchivos--;
}
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
}
};