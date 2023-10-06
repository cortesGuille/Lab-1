#pragma once
#include<iostream>
#include "Software.h"
using namespace std;
/**
 * 
 * @class Clase Oftmatica heredada de Software
 * 
*/
class Ofmatica :public Software{

private:
int cantidadArchivos;

public:
/**
 * Constructor de la Clase Ofmatica
 * @param string
 * @param string
 * @param int
 * @param int
 * @param string 
*/
Ofmatica (string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
    this->cantidadArchivos=0;
}
/**
 * Aumenta la cantidad de archivos x+1
*/
void aumentarArchivos(){
    this->cantidadArchivos ++;
}
/**
 * Decrementa la cantidad de archivos x-1
 * 
*/
void eliminarArchivos(){
    this->cantidadArchivos--;
}
/**
 * Funcion heredada de Software
 * muestra atributos del software por consola
 * 
*/
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
}
};