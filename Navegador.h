#pragma once
#include <iostream>
#include "Software.h"

using namespace std;

class Navegador : public Software{

private:
string list[10];

public:
/**
 * Constructor de la Clase Navegador
 * @param string
 * @param string
 * @param int
 * @param int
 * @param string
*/
 Navegador(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo)
: Software(_nombre,_developer,_clasfEdad,_precio,_tipo){}

/**
 * funcion virutal de la clase Software
 * heredada a 
 * 
*/
void mostrar(){
    Software::mostrar();
    cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
    
    
}
/**
 * Muestra int cantidad de historial
*/
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