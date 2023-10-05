#pragma once
#include<iostream>
#include "Software.h"

using namespace std;

class Juegos :public Software{

private:

string genero;
bool mayorEdad;

public:
/**
 * Constructor de la Clase Juegos
 * @param string
 * @param string
 * @param int
 * @param int
 * @param string
 * @param string
 * @param bool
 * 
*/
Juegos(string _nombre,string _developer, int _clasfEdad, int _precio,string _tipo,string _genero, bool _mayorEdad)
:Software(_nombre,_developer,_clasfEdad,_precio,_tipo){
 this->genero=_genero; 
 this->mayorEdad=_mayorEdad;

}
/**
 * Destructor de la Clase Juegos
*/
~Juegos(){};
//getters
string getGenero(){return this->genero;}
bool get_mayorEdad(){return this->mayorEdad;}
/**
 * Clase Heredada de Software
 * muestra por pantalla los atributos de software Juegos
*/
void  mostrar(){
Software::mostrar();    
cout<<"Nombre: "+this->getNombre()+" Developer: "+this->getDeveloper()+" Tipo: "+this->getTipo()<<endl;
cout<<"Genero: "+getGenero()<<endl;
}


};