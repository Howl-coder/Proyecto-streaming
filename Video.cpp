#include "Video.h"
#include <iostream>
#include <string>
using namespace std;

Video::Video(){
    this->ID=0;
    this->nombre="--";
    this->duracion="00-00-00";
    this->genero="--";
    this->calificacion=0.0;
}

Video::Video(int ID,string nombre,string duracion ,string genero,float calificacion ){
    this->ID=ID;
    this->nombre=nombre;
    this->duracion=duracion;
    this->genero=genero;
    this->calificacion=calificacion;
}
int Video::getID(){
    return this->ID;

    }
string Video::getnombre(){
    return this->nombre;
    }
string Video::getduracion(){
    return this->duracion;
    }
string Video::getgenero(){
    return this->genero;
    }
float Video::getcalificacion(){
    return this->calificacion;
}
    void Video::imprimir(){
    cout<<"El ID es: "<<this->ID<<endl;
    cout<<"El nombre es: "<<this->nombre<<endl;
    cout<<"La duracion es: "<<this->duracion<<endl;
    cout<<"El genero es: "<<this->genero<<endl;
    cout<<"La calificacion es: "<<this->calificacion<<endl;
    }