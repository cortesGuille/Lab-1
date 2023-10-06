#pragma once
#include <iostream>
#include "Usuario.h"
#include "Software.h"

using namespace std;
/**
 * @class Social que es heredada de Sofware
*/
class Social :public Software{

private:
int nAmigos;

public:
/**
 * Constructor de la clase Social que es heredada de Software
 * @param _nombre
 * @param _developer
 * @param _clasfEdad
 * @param _precio
 * @param _tipo
 * 
*/
Social(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
this->nAmigos=0;
}
/**
 * 
 * Destructor de la clase social
*/
~Social(){}
/**
 * Muestra los amigos de un usuario
 * 
*/
void mostrarAmigos(){
getListaDeUsuarios()->mostrarListaUsuarios();
}
//geter de la clase
int getnAmigos(){
return this->nAmigos;
}
/**
 * Funcion para agregar Amigos de la clase Social
*/
void agregarAmigos(Usuario* _usuario){
    Usuario* ptu=_usuario;
    getListaDeUsuarios()->agregaUsuario(_usuario);
    nAmigos++;
}
/**
 * Funcion virtual de la Clase Software
 * Implementada en Social
 * muestra los atributos de la clase
 * 
*/
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
}

};