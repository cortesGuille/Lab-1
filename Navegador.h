#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Navegador : public Software{

private:
string list[10];

public:
 Navegador(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){}


void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
    
    
}
void mostrarHistorial(){
    string hist;
    for(int i=0;i<10;i++){
            hist=list[i];
            if(hist==""){    
            }else{
                cout<<hist<<endl;
            }   
    }
}

};