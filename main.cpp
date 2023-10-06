#include <iostream>
#include <vector>
//Software
#include "Software.h"
#include "Juegos.h"
#include "Social.h"
#include "Seguridad.h"
#include "Ofmatica.h"
#include "Produccion.h"
#include "Navegador.h"
//Usuarios
#include "Usuario.h"
#include "Amigos.h"
//Listas
#include "ListaDeUsuarios.h"
#include "ListaSoftware.h"
using namespace std;

Usuario* Login(ListaDeUsuario* lU);
Usuario* Registrar(ListaDeUsuario* lU);
void addSoftware(ListaSoftware* lista, Usuario* u);
void deleteSoftware(ListaSoftware* lista,Usuario* u); 
void addUser(ListaDeUsuario* lista);
void instalSoftware(ListaSoftware* lista);
int main(){

ListaSoftware* BibliotecaG= new ListaSoftware();
ListaDeUsuario* ListaGeneralDeUsuarios= new ListaDeUsuario();

//POBLANDO BASE DE DATOS
//SOFTWARE
   //JUEGOS
Software* pt1= new Juegos("LOL","RIOT GAMES",18,0,"Juego","MOBA",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Call of Duty","Infinity Ward",18,60,"Juego","FPS",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("The Legens of Zelda","Nintendo",10,50,"Juego","Aventura",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("FIFA 22","EA Sport",3,60,"Juego","Deporte",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Skyrim","Bethesda Games",18,40,"Juego","RPG",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Rocket League","Psyonix",7,20,"Juegos","Deporte",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Minecraft","Mojang",7,30,"Juego","Aventura",false);
BibliotecaG->agregarSoftware(pt1);
pt1 =new Juegos("Resident Evil Village","Capcom",18,60,"Juego","Terro",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Among Us","InnerSloth",10,0,"Juego","Misterio",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Super Smash Bros","Bandai Namco Studios",10,60,"Juego","Lucha",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Sims4","Maxis",12,40,"Juego","Casual",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Grand Theft Auto V","Rockstar North",18,30,"Juego","Mundo Abierto",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Overwacth","Blizzad Entertainment",12,40,"Juego","FPS",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Red Dead Redemtion 2","Rockstar Studios",18,50,"Juego","Mundo Abierto",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Street Figthers V","Capcom",12,60,"Juego","Lucha",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Dark Souls III","FromSoftware",16,40,"Juego","RPG",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Dota2","Valve Corporation",13,0,"Juego","MOBA",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("L.A Noire","Team Bondi",18,40,"Juego","Misterio",false);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Resident Evil 4","Capcom",18,40,"Juego","Terror",true);
BibliotecaG->agregarSoftware(pt1);
pt1= new Juegos("Stardew Valley","ConcernedApe",7,15,"Juego","Casual",false);
BibliotecaG->agregarSoftware(pt1);
    //OFMATICA
Software* of1= new Ofmatica("Microsoft Office","Microsoft",0,0,"Ofmatica");
BibliotecaG->agregarSoftware(of1);
of1= new Ofmatica("Libre Office","The Document Foundation",0,0,"Ofmatica");
BibliotecaG->agregarSoftware(of1);
of1= new Ofmatica("Google Workspace","Google LLC",0,6,"Ofmatica");
BibliotecaG->agregarSoftware(of1);
of1= new Ofmatica("WPS Office","Kingsoft Office Software",0,0,"Ofmatica");
BibliotecaG->agregarSoftware(of1);
of1= new Ofmatica("OnlyOffice","Ascencio System SIA",0,0,"Ofmatica");
BibliotecaG->agregarSoftware(of1);
   //SEGURIDAD
Software* seg1= new Seguridad("Avast Antivirus","Avast Software",0,0,"Seguridad","Ransomware");
BibliotecaG->agregarSoftware(seg1); 
seg1= new Seguridad("Malwarebytes","Malwarebytes Corporation",0,0,"Seguridad","Spyware");
BibliotecaG->agregarSoftware(seg1); 
seg1= new Seguridad("Norton Security","NortonLifeLock Inc.",0,40,"Seguridad","Botnets");
BibliotecaG->agregarSoftware(seg1); 
seg1= new Seguridad("Kapersky Internet Security","Kaspersky Lab",0,40,"Seguridad","Rootkits");
BibliotecaG->agregarSoftware(seg1); 
seg1= new Seguridad("AVG Antivirus","AVG Technologies",0,0,"Seguridad","Gusanos");
BibliotecaG->agregarSoftware(seg1); 
seg1= new Seguridad("Bitdegender Total Security","Bitdefender",0,50,"Seguridad","Troyanos");
BibliotecaG->agregarSoftware(seg1); 
    //PRODUCCION
Software* prod1= new Produccion ("VideoEditor Pro", "DesarrolladorX", 18, 150,"Produccion", "video");
BibliotecaG->agregarSoftware(prod1); 
prod1= new Produccion ("MusicStudio Deluxe", "Developer Inc.", 16, 120, "Produccion", "musica");
BibliotecaG->agregarSoftware(prod1); 
prod1= new Produccion ("StreamingApp Ultimate", "TechCo", 12, 200, "Produccion", "streaming");
BibliotecaG->agregarSoftware(prod1); 
prod1= new Produccion ("PhotoMaster Pro", "Creative Software", 15, 100, "Produccion", "fotos");
BibliotecaG->agregarSoftware(prod1); 
    //NAVEGADOR
Software* nav= new Navegador("Chrome", "Google", 0, 0, "Navegador");
BibliotecaG->agregarSoftware(nav); 
nav=new Navegador("Firefox", "Mozilla", 0, 0, "Navegador");
BibliotecaG->agregarSoftware(nav); 
    //SOCIAL
Software* s1= new Social("Facebook","Meta",13,0,"Social");
BibliotecaG->agregarSoftware(s1);
Software* s2= new Social("Twitter","Twitter",18,0,"Social");
BibliotecaG->agregarSoftware(s2); 
   //USUARIOS
Usuario* user1 = new Usuario("Juan","123",20,false,"juan@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user1);
Usuario* user2= new Usuario("Pedro","333",18,false,"pedro@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user2);
Usuario* user3= new Usuario("Jose","123123",30,true,"admin@admin.cl");
ListaGeneralDeUsuarios->agregaUsuario(user3);
Usuario* user4= new Usuario("Matias","3331",11,false,"");
ListaGeneralDeUsuarios->agregaUsuario(user4);
Usuario* user5= new Usuario("Kevin","1231",10,false,"");
ListaGeneralDeUsuarios->agregaUsuario(user5);
Usuario* user6= new Usuario("User1","23333",10,false,"");
ListaGeneralDeUsuarios->agregaUsuario(user6);
Usuario* user7= new Usuario("Pepito","33233",9,false,"");
ListaGeneralDeUsuarios->agregaUsuario(user7);
Usuario* user8= new Usuario("Manolito","332e33",20,false,"manolo@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user8);
Usuario* user9= new Usuario("Juan A","asd2e33",20,false,"juanpa@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user9);
Usuario* user10= new Usuario("Roberto","awe2e33",20,false,"roberto@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user10);
Usuario* user11= new Usuario("Felipe","33we2e33",20,false,"felipe@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user11);
Usuario* user12= new Usuario("Allyson","33we223e33",20,false,"alyyson@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user12);
Usuario* user13= new Usuario("Sofia","3ASdjk",20,false,"sofia@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user13);
Usuario* user14= new Usuario("Maria","3ASsdadjk",20,false,"maria@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user14);
Usuario* user15= new Usuario("Mario","233ASdjk",20,false,"mario@gmail.com");
ListaGeneralDeUsuarios->agregaUsuario(user15);

Amigos* a1= new Amigos("Juan",18,"Facebook");
Amigos* a2= new Amigos("Pedro",18,"Facebook");
Amigos* a3= new Amigos("Matias",11,"Facebook");//menor
Amigos* a4= new Amigos("Kevin",10,"Facebook");//menor
Amigos* a5= new Amigos("User1",10,"Facebook");//menor
Amigos* a6= new Amigos("Pepito",9,"Facebook");//menor
Amigos* a7= new Amigos("Manolito",20,"Twitter");
Amigos* a8= new Amigos("Juan A",20,"Twitter");
Amigos* a9= new Amigos("Roberto",20,"Twitter");
Amigos* a10= new Amigos("Felipe",20,"Twitter");
Amigos* a11= new Amigos("Allyson",20,"Twitter");
Amigos* a12= new Amigos("Sofia",20,"Twitter");
Amigos* a13= new Amigos("Maria",20,"Twitter");
Amigos* a14= new Amigos("Mario",20,"Twitter");
Amigos* a15= new Amigos("Jose",30,"Facebook");
//AGREGANDO AMIGOS A TODOS LOS USUARIOS
//JUAN
    //s1 Facebook s2 Twitter
s1->getListaDeUsuarios()->agregaUsuario(user1); //Software
user1->agregarAmigo(a2);
user1->agregarAmigo(a3);
//JOSE
s1->getListaDeUsuarios()->agregaUsuario(user3);
user3->agregarAmigo(a2);
user3->agregarAmigo(a1);
//Pedro
s1->getListaDeUsuarios()->agregaUsuario(user2);
user3->agregarAmigo(a1);
user3->agregarAmigo(a4);
//Matias
s1->getListaDeUsuarios()->agregaUsuario(user4);
user4->agregarAmigo(a4);
user4->agregarAmigo(a5);
//Kevin
s1->getListaDeUsuarios()->agregaUsuario(user5);
user5->agregarAmigo(a5);
user5->agregarAmigo(a6);
//User1
s1->getListaDeUsuarios()->agregaUsuario(user6);
user6->agregarAmigo(a4);
user6->agregarAmigo(a6);
//Pepito
s1->getListaDeUsuarios()->agregaUsuario(user7);
user7->agregarAmigo(a5);
user7->agregarAmigo(a4);
//Manolito
s2->getListaDeUsuarios()->agregaUsuario(user8);
user8->agregarAmigo(a8);
user8->agregarAmigo(a9);
//Juan A
s2->getListaDeUsuarios()->agregaUsuario(user9);
user9->agregarAmigo(a7);
user9->agregarAmigo(a9);
//Roberto
s2->getListaDeUsuarios()->agregaUsuario(user10);
user10->agregarAmigo(a8);
user10->agregarAmigo(a7);
//Felipe
s2->getListaDeUsuarios()->agregaUsuario(user11);
user11->agregarAmigo(a11);
user11->agregarAmigo(a12);
//Allyson
s2->getListaDeUsuarios()->agregaUsuario(user12);
user12->agregarAmigo(a10);
user12->agregarAmigo(a12);
//Sofia
s2->getListaDeUsuarios()->agregaUsuario(user13);
user13->agregarAmigo(a11);
user13->agregarAmigo(a13);
//Maria
s2->getListaDeUsuarios()->agregaUsuario(user14);
user14->agregarAmigo(a12);
user14->agregarAmigo(a14);
//Mario
s2->getListaDeUsuarios()->agregaUsuario(user15);
user15->agregarAmigo(a12);
user15->agregarAmigo(a13);




//INICIO DE SOFTWARE
bool cierrePrograma;
bool cierreFinal;
cierreFinal=true;
cierrePrograma=true;
int opcion;
Usuario* uL=Login(ListaGeneralDeUsuarios);
while(cierreFinal){

if(uL->getLog()==true){
//MENU con las opciones del administrador
    while(cierrePrograma){
    cout<<"Bienvenido Administrador"<<endl;
    cout<<"Que desea Hacer "<<endl;
    cout<<"1. Eliminar Software "<<endl;//mas rato
    cout<<"2. Mostrar  Software "<<endl;
    cout<<"3. Instalar Software "<<endl;
    cout<<"4. Crear Usuario"<<endl;
    cout<<"5. Mostrar Usuarios"<<endl;
    cout<<"6. Logout"<<endl;
    cout<<"7. Agregar  Software"<<endl;
    cout<<"8. Eliminar Software en tu Biblioteca"<<endl;
    cout<<"9. Mostrar mis Software"<<endl;
    cin>>opcion;

    if(opcion==1){
        //Elimina el software
        string n;
        string d;
        cout<<"Ingrese Nombre del Software"<<endl;
        cin>>n;
        cout<<"Ingrese Developer del Software"<<endl;
        cin>>d;
        Software * sE= BibliotecaG->buscarSoftware(n,d);
        if(sE!=NULL){
            BibliotecaG->EliminarSoftware(sE);
            cout<<"Se Elimino el Software"<<endl;
        }else{
            cout<<"No se encontro el Software"<<endl;
        }
    }else if(opcion==2){
        //Muestra todos los softwares
        BibliotecaG->mostrarSoftwareAdmin();
    }else if(opcion==3){
        //Instala un nuevo Software
        instalSoftware(BibliotecaG);
    }else if(opcion==4){
        //Agrega un usuario
        addUser(ListaGeneralDeUsuarios);
    }else  if(opcion==5){
        //Muestra los usuarios
        ListaGeneralDeUsuarios->mostrarListaUsuarios();
    }else  if(opcion==6){
        //Cierre de sesion
        cierrePrograma=false;
    }else if(opcion==7){
        //mostrar los software dependiendo de la edad 
        // del usuario que este en ese momento
         int _age=uL->getEdad();
            if(_age<18){
                BibliotecaG->mostrarSoftwareMenor18();
            }else{
                
                BibliotecaG->mostrarSoftware();
            }
        //agrega el software a su biblioteca
            addSoftware(BibliotecaG,uL);
    }else if(opcion==8){
        //elimina el software de su biblioteca
        deleteSoftware(BibliotecaG,uL); 
        }else if(opcion==9){
         //Muestra los Softwares de la Biblioteca del Usuario
        cout<<"Mostrando tus Softwares: "<<endl;
        BibliotecaG->mostrarSUsuario(uL);
            }else{
        cout<<"Opcion no Valida"<<endl;
    }
  }

}else{
  while(cierrePrograma){    
//MENU para los usuarios 
    cout<<"Bienvenido Usuario: "<<endl;
    cout<<"Que desea Hacer "<<endl;
    cout<<"1.  Agregar software"<<endl;
    cout<<"2.  Eliminar software"<<endl;
    cout<<"3.  Mostrar mis sofware"<<endl;
    cout<<"4.  Social"<<endl;
    cout<<"5.  logout"<<endl;
    cin>>opcion;

    if(opcion==1){
        //mostrar los software dependiendo de la edad 
        // del usuario que este en ese momento
         int _age=uL->getEdad();
            if(_age<18){
                BibliotecaG->mostrarSoftwareMenor18();
            }else{
                
                BibliotecaG->mostrarSoftware();
            }
        //agrega el software a su biblioteca
            addSoftware(BibliotecaG,uL);
    }else if(opcion==2){
        //elimina el software de su biblioteca
            deleteSoftware(BibliotecaG,uL);  

    }else if(opcion==3){
        //Muestra los Softwares de la Biblioteca del Usuario
        cout<<"Mostrando tus Softwares: "<<endl;
        BibliotecaG->mostrarSUsuario(uL);
    }else if (opcion==5){
        //para salir de sesion 
        cierrePrograma=false;
    }else if (opcion==4){
       //Aqui mostramos los softwares social que tiene el usuario
        // y agregamos a otro usuario como amigo
        string nm;
        string dv;
        string nombre;
        cout<<"Estos son los Software que tienes"<<endl;
            BibliotecaG->mostrarSocialsuario(uL);
        cout<<"Ingrese nombre Software a entrar"<<endl;
        cin>>nm;
        cout<<"Ingrese Developer del Software a entrar"<<endl;
        cin>>dv;
        Software* s=BibliotecaG->buscarSoftware(nm,dv);
        cout<<"Amigos Asociados al Sofware"<<endl;
        uL->mostrarAmigos(s->getNombre());
        cout<<"Estos son los Usuarios"<<endl;  
            ListaGeneralDeUsuarios->mostrarListaUsuarios();
        cout<<"Ingrese el Nombre de la Lista de Amigos"<<endl;
        cin>>nombre;
        Usuario* amigo= ListaGeneralDeUsuarios->buscarUsuarioPorNombre(nombre);
        if(amigo!=NULL){
            int eAmigo= amigo->getEdad();
            if(eAmigo>=18 && uL->getEdad()<18){
                cout<<"usuario no puede tener Amigos de mas de 18 anios"<<endl;
            }else if(eAmigo<18 && uL->getEdad()<18){
             Amigos* nAmigo= new Amigos(amigo->getNombre(),amigo->getEdad(),s->getNombre());
             uL->agregarAmigo(nAmigo);
            }else{
             Amigos* nAmigo= new Amigos(amigo->getNombre(),amigo->getEdad(),s->getNombre());   
             uL->agregarAmigo(nAmigo);    
            }
        }else{
            cout<<"NO existe ese amigo"<<endl;
        }
    }else{
        cout<<"Opcion No valida: "<<endl;
    }
  }
           
}
cout<<"Salir del Programa 1. Si  2.No"<<endl;
cin>>opcion;
if(opcion==1){
    cierreFinal=false;
}else{
    uL=Login(ListaGeneralDeUsuarios);
}
}
cout<<"FIN DEL PROGRAMA"<<endl;
return 0;   
};
void instalSoftware(ListaSoftware* lista){
    string name;
    string deve;
    int clafEdad;
    int precio;
    string tipo;
    cout<<"Ingrese Nombre del Software: "<<endl;
    cin>>name;
    cout<<"Ingrese Developer del Software:  "<<endl;
    cin>>deve; 
    cout<<"Ingrese Clasificacion de Edad del Software: "<<endl;
    cin>>clafEdad;
    cout<<"Ingrese Precio del Software: "<<endl;
    cin>>precio;
    cout<<"Ingrese Tipo del Software: "<<endl;
    cin>>tipo;

    if(tipo=="Juego" || tipo=="Seguridad" || tipo=="Social" || tipo=="Ofmatica"
         || tipo=="Produccion" || tipo=="Navegador"){

       if(tipo=="Juego"){
        string _genero;
        cout<<"Ingrese Genero del Juego: "<<endl;
        cin>>_genero;
        if(clafEdad<18){
            Juegos* nJ= new Juegos(name,deve,clafEdad,precio,tipo,_genero,false);
            lista->agregarSoftware(nJ);
        }else{
            Juegos* nJ= new Juegos(name,deve,clafEdad,precio,tipo,_genero,true);
            lista->agregarSoftware(nJ);
        }
        
       }  
       if(tipo=="Seguridad"){
          int ppt;
          Seguridad* ns;
          cout<<"Que Tipo de Malware Maneja"<<endl;
          cout<<"1. Troyano "<<endl;
          cout<<"2. Ransomware"<<endl;
          cout<<"3. Spyware"<<endl;
          cout<<"4. Rootkits"<<endl;
          cout<<"5. Gusanos"<<endl;
          cout<<"6. Bootnets"<<endl;
          cin>>ppt;
          switch (ppt)
          {
          case 1:
                    ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Troyano");
                    lista->agregarSoftware(ns);
            break;
          case 2:
                   ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Ransomware");
                  lista->agregarSoftware(ns);
            break;       
          case 3:
                    ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Spyware");
                    lista->agregarSoftware(ns);
            break;
          case 4:
                    ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Rootkits");
                    lista->agregarSoftware(ns);
            break;
          case 5:
                    ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Gusanos");
                    lista->agregarSoftware(ns);
            break;
            case 6:   
                        ns= new Seguridad(name,deve,clafEdad,precio,tipo,"Bootnets");
                     lista->agregarSoftware(ns);
            break;
          default:
          cout<<"Opcion No Valida"<<endl;
            break;
          }
          
          
       }
       if(tipo=="Social"){
        Social* nS= new Social(name,deve,clafEdad,precio,tipo);
        lista->agregarSoftware(nS);
       }
       if(tipo=="Produccion"){
        string  _tipoSolucion;
        cout<<"Ingrese Tipo de Solucion: "<<endl;
        cin>>_tipoSolucion;
        Produccion* nP= new Produccion(name,deve,clafEdad,precio,tipo,_tipoSolucion);
        lista->agregarSoftware(nP);
       }
       if(tipo=="Ofmatica"){
           Ofmatica* nO= new Ofmatica(name,deve,clafEdad,precio,tipo);
           lista->agregarSoftware(nO);
       }
       if(tipo=="Navegador"){
           Navegador* nN= new Navegador(name,deve,clafEdad,precio,tipo);
           lista->agregarSoftware(nN);
       }

    }else{
        cout<<"Se ingreso un tipo no valido"<<endl;
    }
}
void addUser(ListaDeUsuario* lista){
    string _name;
    string _password;
    int edad;
    bool log;
    log=false;
    string correo;
    cout<<"Ingrese Nombre de Usuario: "<<endl;
    cin>>_name;
    cout<<"Ingrese Contraseña: "<<endl;
    cin>>_password;
    cout<<"Ingrese edad:  "<<endl;
    cin>>edad;
    if(edad>=18){       
    cout<<"Ingrese Correo:  "<<endl;
    cin>>correo;
    }
    Usuario* newUser= new Usuario(_name,_password,edad,false,correo);
    lista->agregaUsuario(newUser);
}
void deleteSoftware(ListaSoftware* lista,Usuario* u){
string name;
string deve;
cout<<"Ingrese Nombre del Software a eliminar: "<<endl;
cin>>name;
cout<<"Ingrese Developer del Software a eliminar:  "<<endl;
cin>>deve; 

lista->eliminarUsuariodeSofware(u,name,deve);
}
void addSoftware(ListaSoftware* lista, Usuario* u){
string name;
string deve;
cout<<"Ingrese Nombre del Software a agregar: "<<endl;
cin>>name;
cout<<"Ingrese Developer del Software a agregar:  "<<endl;
cin>>deve;
Software* ptS= lista->buscarSoftware(name,deve);
if(ptS!=NULL){
    ptS->getListaDeUsuarios()->agregaUsuario(u);
}

}
Usuario* Registrar(ListaDeUsuario* lU){
    cout<<"Registro de Usuario "<<endl;
    string _nomnre;
    string _password;
    int _edad;
    string _correo;
    cout<<"Ingrese Nombre:  "<<endl;
    cin>>_nomnre;
    cout<<"Ingrese Contraseña: "<<endl;
    cin>>_password;
    cout<<"Ingrese edad:  "<<endl;
    cin>>_edad;
    if(_edad>=18){       
    cout<<"Ingrese Correo:  "<<endl;
    cin>>_correo;
    }
    Usuario* newUser= new Usuario(_nomnre,_password,_edad,false,_correo);
    lU->agregaUsuario(newUser);
    return newUser;
}
Usuario* Login(ListaDeUsuario* lU){
string _nombre;
string _password;
int _op;
Usuario* _user=NULL;
while(_user==NULL){
    cout<<"Inicio de Sesion "<<endl;
    cout<<"Ingrese Nombre: "<<endl;
    cin>>_nombre;
    cout<<"Ingrese Contraseña"<<endl;
    cin>>_password;
    _user=lU->buscarUsuario(_nombre,_password);
    if(_user==NULL){
        cout<<"Usuario no encontrado , Desea Registrarse ?"<<endl;
        cout<<"1. Si"<<endl;
        cout<<"2. NO"<<endl;
        cin>>_op;
        switch (_op)
        {
        case 1:
            _user=Registrar(lU);
            break;
        case 2:
            cout<<"..."<<endl;
            break;
        
        default:
        cout<<"Opcion No valida"<<endl;
            break;
        }

    }
}
    return _user;
};