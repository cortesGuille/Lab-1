#pragma once
#include <vector>
#include <iostream>
#include "Amigos.h"
using namespace std;

class Usuario{

private:

string nombre;
string password;
int edad;
vector<Amigos*> listaAmigos;

//list<Software> bliblioteca;
bool log;
string correo;

public:
/**
 * Constructor de la Clase Alumno
 * @param string
 * @param string
 * @param int
 * @param int
 * @param bool
 * @param string
 * 
*/
Usuario(string _nombre, string _password, int _edad, bool _log,string _correo){
this->nombre= _nombre;
this->password=_password;
this->edad=_edad;
this->log=_log;
this->correo=_correo;
//this->listS= new ListaDeSoftware();

}
/**
 * Destructor de la Clase Usuario
 * 
*/
~Usuario(){}
//getters de la clase
string getNombre(){return this->nombre;}
string getPassword(){return this->password;}
int getEdad(){return this->edad;}
bool getLog(){return this->log;}
string getCorreo(){return this->correo;}
/**
 * 
 * Muestra los Amigos que tiene el Usuario
 * en "x" Software Social
*/
void mostrar(){
    cout<<"Nombre: "+getNombre()<<endl;
    cout<<"Edad: ";
    cout<<getEdad()<<endl;
};
/**
 * Agrega un Amigo al Usuario
 * 
 * @param Amigo*
*/
void agregarAmigo(Amigos* _amigo){
    listaAmigos.push_back(_amigo);
}
/**
 * Elimina amigo al Usuario
 * @param string
 * 
*/
void eliminarAmigo(string _amigo){
    for(int i=0; i<listaAmigos.size();i++){
        if(listaAmigos[i]->getAmigo()==_amigo){
            listaAmigos.erase(listaAmigos.begin()+i);
        }
    }
}

/**
 * Muestra los amigos en "x" Software Social
 * @param string
 * 
*/
void mostrarAmigos(string social){
    for(int i=0; i<listaAmigos.size();i++){
        if(listaAmigos[i]->getnSocial()==social){
            listaAmigos[i]->mostrar();
        }
    }
}
};

