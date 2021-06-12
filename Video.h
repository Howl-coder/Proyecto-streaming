#pragma once
#include <string>
#include <iostream>
using namespace std;

class Video{
    protected:
    int ID;
    string nombre;
    string duracion;
    string genero;
    float calificacion;

    public:
    Video();
    Video(int, string, string ,string,float );
    int getID();
    string getnombre();
    string getduracion();
    string getgenero();
    float getcalificacion();
    virtual void imprimir();

};