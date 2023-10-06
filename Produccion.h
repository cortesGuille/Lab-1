#pragma once
#include<iostream>
#include "Software.h"

using namespace std;
/**
 * @class Clase Produccion que es Heredada de Software
 * 
*/

class Produccion :public Software{

private:
string tipoSolucion;
public:
/**
 *  Constructor de la clase Produccion
 * @param string
 * @param string
 * @param int
 * @param int
 * @param string
 * @param string
 * 
*/
Produccion(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo,string _tipoSolucion)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
this->tipoSolucion=_tipoSolucion;
}
/**
 * Destructor de la Clase Produccion
*/
~Produccion(){}
//getters
string getTipoProduccion(){
    return this->tipoSolucion;
}
/**
 * Metodo Heredado de la Clase Software
 * muestra algunos de los atributos de la clase
 * 
*/
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()<<endl;
}
};