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
    /**
     * Elimina a Software de la lista
     * @param Software*
     * 
    */
    void eliminarSoftware(Software* sof){
    }
    /***
     * Agrega Software a la Lista
     * @param Software*
    */
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
    /**
     * Muestra solo aquellos software que su clasificacion de edad sea
     * menor a 18
    */
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
    /**
     * Muestra todos los Software de la lista, exepto los de "Seguridad"
    */
    void mostrarSoftware(){
    NodoS* temp=this->cabeza;
    while(temp!=NULL){
    if(temp->_Software->getTipo()!="Seguridad"){
        temp->_Software->mostrar();
    }    
    
    temp=temp->sgte;
    }
    }
    /**
     * Muestra todos los Software de la lista
    */
    void mostrarSoftwareAdmin(){
        NodoS* temp= this->cabeza;
        while(temp!=NULL){
            temp->_Software->mostrar();
            temp=temp->sgte;
        }
    }
    /**
     * Muestra los Software que posee un Usuario
     * @param Usuario*
     * 
    */
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
    /**
     * Busca si un Software esta en la lista, en caso de que si exista
     * devuelve el Software encontrado
     * @param string nombre del Software
     * @param string nombre del Developer
     * @return Software*
    */
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
    /**
     * Elimina el Usuario de un Software de la lista
     * @param Usuario*
     * @param string nombre del Software
     * @param string nombre del Developer
    */
    void eliminarUsuariodeSofware(Usuario* user,string name, string deve){
        if(!this->cabeza) return;
        Software* sTemp= buscarSoftware(name,deve);
        if(sTemp!=NULL){
            sTemp->getListaDeUsuarios()->eliminarUsuario(user);
            cout<<"Se Elimino Software de Su biblioteca"<<endl;
        }
            
            
    }
    /**
     * Muestra los Software Social de un Usuario
     * @param Usuario
     * 
    */
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
    /**
     * Elimina un software de la lista
     * @param Software
     * 
    */
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
