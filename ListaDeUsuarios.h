#pragma once
#include <iostream>
#include "Usuario.h"
#include "NodoU.h"


using namespace std;
/**
 * @class Lista de Usuarios que contiene Usuarios
 * 
*/
class ListaDeUsuario{

private:

NodoU* head;
int cont;

public:
/**
 * Constructor de la Lista de Usuarios
*/
ListaDeUsuario(){
this->head=NULL;
this->cont=0;
}
/**
 * Destructor de la ListaUsuarios
*/
~ListaDeUsuario(){
  NodoU* actual = this->head;
  while(actual){
    NodoU* siguiente = actual->sgte;
    delete actual;
    actual =siguiente;
  }
}
/**
 * Metodo para agregar un Usuario a la Lista
 * @param Usuario*
*/
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
/**
 * Elimina un Usuario de la lista 
 * @param Usuario
*/
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
/**
 * Muestra a todos los Usuarios en la Lista
*/
void mostrarListaUsuarios(){
  NodoU* temp=this->head;
  while(temp!=NULL){
    if(temp->_usuario->getLog()==false){
      temp->_usuario->mostrar();
    }
    temp=temp->sgte;
  }
}
/**
 * Busca un usuario en la lista, si existe lo retorna
 * @param string nombre
 * @param string password
 * @return Usuario
*/
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
/**
 * Busca a un Usuario solo por su nombre, si existe lo retorna
 * @param string nombre
 * @return Usuario*
*/
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
//getter
int getCont(){
  return this->cont;
}

Usuario* buscarUsuarioI(int poss){
  if(poss<-1){
    return NULL;
  }
  NodoU* actual= this->head;
  int contador =0;
  while(actual != NULL && contador < poss){
    actual= actual->sgte;
    contador++;
  }
  return actual->_usuario;
}

};