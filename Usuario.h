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
Usuario(string _nombre, string _password, int _edad, bool _log,string _correo){
this->nombre= _nombre;
this->password=_password;
this->edad=_edad;
this->log=_log;
this->correo=_correo;
//this->listS= new ListaDeSoftware();

}
~Usuario(){}
string getNombre(){return this->nombre;}
string getPassword(){return this->password;}
int getEdad(){return this->edad;}
bool getLog(){return this->log;}
string getCorreo(){return this->correo;}
void mostrar(){
    cout<<"Nombre: "+getNombre()<<endl;
    cout<<"Edad: ";
    cout<<getEdad()<<endl;
};

void agregarAmigo(Amigos* _amigo){
    listaAmigos.push_back(_amigo);
}
void eliminarAmigo(string _amigo){
    for(int i=0; i<listaAmigos.size();i++){
        if(listaAmigos[i]->getAmigo()==_amigo){
            listaAmigos.erase(listaAmigos.begin()+i);
        }
    }
}


void mostrarAmigos(string social){
    for(int i=0; i<listaAmigos.size();i++){
        if(listaAmigos[i]->getnSocial()==social){
            listaAmigos[i]->mostrar();
        }
    }
}
};

