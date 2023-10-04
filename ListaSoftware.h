#pragma once
#include<iostream>
#include "NodoS.h"
#include "Software.h"
using namespace std;

class ListaSoftware{
    private:

    NodoS* cabeza;
    int _cont;

    public:

    ListaSoftware(){
        this->cabeza=NULL;
        _cont=0;
    }
    void eliminarSoftware(Software* sof){
    }
    void agregarSoftware(Software* sof){
        NodoS* nNodo= new NodoS(sof);
        if(this->cabeza==NULL){
            this->cabeza=nNodo;
            _cont++;
        }else{
            NodoS* tem= this->cabeza;
            while(tem->sgte != NULL){
                tem=tem->sgte;
            }
            tem->sgte=nNodo;
            _cont++;
        }
    }
    /**
     * obtiene el contador de usuarios en la lista
     * 
     * @return int;
    */
    int getCont(){
        return this->_cont;
    }
    void mostrarSoftwareMenor18(){
    NodoS* temp=this->cabeza;
    while(temp!=NULL){
    int age=temp->_Software->getClasfEdad();
     if(age<18 && temp->_Software->getTipo()!="Seguridad"){
        temp->_Software->mostrar();
        
     }   
     temp=temp->sgte;
    }
    }
    void mostrarSoftware(){
    NodoS* temp=this->cabeza;
    while(temp!=NULL){
    if(temp->_Software->getTipo()!="Seguridad"){
        temp->_Software->mostrar();
    }    
    
    temp=temp->sgte;
    }
    }
    void mostrarSoftwareAdmin(){
        NodoS* temp= this->cabeza;
        while(temp!=NULL){
            temp->_Software->mostrar();
            temp=temp->sgte;
        }
    }
    void mostrarSUsuario(Usuario* usuario){
        NodoS* temp=this->cabeza;
        while(temp!=NULL){
        Usuario* u= temp->_Software->getListaDeUsuarios()->buscarUsuario(usuario->getNombre(),usuario->getPassword());
        if(u!=NULL){
         temp->_Software->mostrar();
            
        }
        temp=temp->sgte;
        }
    }
    Software* buscarSoftware(string name, string develop){
    NodoS* actual= this->cabeza;
    while(actual!=NULL){
    if(actual->_Software->getNombre()==name
    && actual->_Software->getDeveloper()==develop){
      return actual->_Software;
    }
      actual=actual->sgte;
  }
    cout<<"No se encontro el Software"<<endl;
    return NULL;
    }
    void eliminarUsuariodeSofware(Usuario* user){
        if(!this->cabeza) return;
        Software* sTemp= buscarSoftware(user->getNombre(),user->getPassword());
        if(sTemp!=NULL){
            sTemp->getListaDeUsuarios()->eliminarUsuario(user);
            cout<<"Se Elimino Software de Su biblioteca"<<endl;
        }
            
            
    }

    void mostrarSocialsuario(Usuario* user){
        NodoS* temp=this->cabeza;
        while(temp!=NULL){
            Usuario* u= temp->_Software->getListaDeUsuarios()->buscarUsuario(user->getNombre(),user->getPassword());
            if(u!=NULL && temp->_Software->getTipo()=="Social"){
                temp->_Software->mostrar();
            }
            temp=temp->sgte;
        }
    }

    void EliminarSoftware(Software* sof){
        if(!this->cabeza) return;
        if(this->cabeza->_Software->getNombre()== sof->getNombre()
                && this->cabeza->_Software->getDeveloper()== sof->getDeveloper()){
            this->cabeza=this->cabeza->sgte;
            return;
        }
        NodoS* temp= this->cabeza;
        while(temp->sgte->_Software->getNombre()!= sof->getNombre()
                && temp->sgte->_Software->getDeveloper()!= sof->getDeveloper()){
            temp=temp->sgte;
        }
       if(temp->sgte!=NULL){
        NodoS* _aBorrar=temp->sgte;
        temp->sgte=temp->sgte->sgte;
        delete _aBorrar;
        _cont --;
       }
    }
};
