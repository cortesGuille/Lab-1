#pragma once
#include <iostream>
#include "ListaDeUsuarios.h"
using namespace std;
/**
 * @class Clase Software
*/
class Software{

private:

string nombre;
string developer;
int clasfEdad;
ListaDeUsuario* listaU;
int precio;
string tipo;

public:

/**
 * Construcctor de la clase Software 
 * @param string 
 * @param string
 * @param int
 * @param int
 * @param string
 * 
*/
Software(string _nombre, string _developer, int _clasfEdad, int _precio,string _tipo ){
    this->nombre=_nombre;
    this->developer=_developer;
    this->clasfEdad=_clasfEdad;
    this->precio=_precio;
    this->tipo=_tipo;
    this->listaU= new ListaDeUsuario();
}
/**
 * Destructor de la clase Software
 *  
 * 
*/
~Software(){};
virtual void mostrar(){
    cout<<"-----------"<<endl;
    cout<<"Software -->";   
};
//geteers de la clase
string getNombre(){return this->nombre;}
string getDeveloper(){return this->developer;}
int getClasfEdad(){return this->clasfEdad;}
int getPrecio(){return this->precio;}
string getTipo(){return this->tipo;}
ListaDeUsuario* getListaDeUsuarios(){
return listaU;
}
//Ejemplo.
};
