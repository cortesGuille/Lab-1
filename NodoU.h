#pragma once
#include<iostream>
#include "Usuario.h"

using namespace std;

class NodoU{
public:

Usuario* _usuario;
NodoU* sgte;

NodoU(Usuario* user){
    _usuario=user;
    sgte=NULL;
}

};