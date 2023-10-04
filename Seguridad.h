#pragma once
#include<iostream>
#include "Software.h"
using namespace std;

class Seguridad :public Software{

private:
string tipoMalware;
public:
Seguridad(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo,string _tipoMalware)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
this->tipoMalware=_tipoMalware;
}
~Seguridad(){}
string getTipoMalware(){
return this->tipoMalware;
}
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
    cout<<"Tipo Malware: "+getTipoMalware()<<endl;
}

}; 