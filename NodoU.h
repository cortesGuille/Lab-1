#pragma once
#include<iostream>
#include "Usuario.h"

using namespace std;
/**
 * @class Nodo para enlazar Usuarios
 * 
*/
class NodoU{
public:

Usuario* _usuario;
NodoU* sgte;

NodoU(Usuario* user){
    _usuario=user;
    sgte=NULL;
}

};