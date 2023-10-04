#pragma once 
#include <iostream>
#include <vector>
using namespace  std;
class Amigos{

private:

string amigo;
int edad;
string nSocial;

public:

Amigos(string user,int _edad ,string social){
amigo=user;
edad=_edad;
nSocial=social;
}
string getAmigo(){return this->amigo;}
string getnSocial(){return this->nSocial;}
int getEdad(){return this->edad;}
void mostrar(){
    cout<<"Amigo: "+getAmigo()<<endl;
    cout<<"Edad: ";
    cout<<this->edad<<endl;
}
};