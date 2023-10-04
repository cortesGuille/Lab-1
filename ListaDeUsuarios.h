#pragma once
#include <iostream>
#include "Usuario.h"
#include "NodoU.h"


using namespace std;

class ListaDeUsuario{

private:

NodoU* head;
int cont;

public:
//Constructor de Lista Usuario
ListaDeUsuario(){
this->head=NULL;
this->cont=0;
}
//destrucutor Lista de Usuarios
~ListaDeUsuario(){
  NodoU* actual = this->head;
  while(actual){
    NodoU* siguiente = actual->sgte;
    delete actual;
    actual =siguiente;
  }
}
//Funcion para agregar Usuarios a la Lista
void agregaUsuario(Usuario* user){
NodoU* nuevoNodo= new NodoU(user);
if(this->head==NULL){
    this->head=nuevoNodo;
    cont++;
}else{
 NodoU* actual= this->head;
 while(actual->sgte != NULL){
    actual= actual->sgte;
 }
 actual->sgte=nuevoNodo;
 cont++;
}

}
void eliminarUsuario(Usuario* _usuario){
 if(!this->head ||! _usuario) return;

 if(this->head->_usuario->getNombre() == _usuario->getNombre() &&
    this->head->_usuario->getPassword() == _usuario->getPassword()){
    cout<<"Se elimino a :"+this->head->_usuario->getNombre()<<endl;
    this->head=head->sgte;
    cont --;
    return;
 } 
 NodoU* temp= this->head;
 while(temp->sgte->_usuario->getNombre() !=_usuario->getNombre() &&
      temp->sgte->_usuario->getPassword() != _usuario->getPassword()){  
        temp=temp->sgte;
    }
    if(temp->sgte != NULL){
      
      NodoU* aBorrar= temp->sgte;
      temp->sgte=temp->sgte->sgte;
      delete aBorrar;
      cont--;
    }
}
void mostrarListaUsuarios(){
  NodoU* temp=this->head;
  while(temp!=NULL){
    if(temp->_usuario->getLog()==false){
      temp->_usuario->mostrar();
    }
    temp=temp->sgte;
  }
}
Usuario* buscarUsuario(string _nombre, string _password){
  NodoU* actual= this->head;
  while(actual!=NULL){
    if(actual->_usuario->getNombre()==_nombre
    && actual->_usuario->getPassword()==_password){
      return actual->_usuario;
    }
      actual=actual->sgte;
  }
  return NULL; 
}
Usuario* buscarUsuarioPorNombre(string _nombre){
  NodoU* actual= this->head;
  while(actual!=NULL){
    if(actual->_usuario->getNombre()==_nombre){
      return actual->_usuario;
    }
      actual=actual->sgte;
  }
  return NULL;
  
}
int getCont(){
  return this->cont;
}

};