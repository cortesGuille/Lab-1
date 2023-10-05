#pragma once
#include<iostream>
#include "Software.h"
using namespace std;

class Seguridad :public Software{

private:
string tipoMalware;
public:
/**
 * Construcctor de la clase Seguridad:
 * @param string
 * @param string
 * @param int
 * @param int
 * @param string
 * @param string
 * @param string
*/
Seguridad(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo,string _tipoMalware)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
this->tipoMalware=_tipoMalware;
}
/**
 * Destructor de la Clase Seguridad
*/
~Seguridad(){}
//getters
string getTipoMalware(){
return this->tipoMalware;
}
/**
 * Clase Heredada de Software
 * muestra las caracteristicas de la clase por consola
 * 
*/
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
    cout<<"Tipo Malware: "+getTipoMalware()<<endl;
}

}; 