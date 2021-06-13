#include "Pelicula.h"
#include <iostream>
#include <string>
using namespace std;

Pelicula::Pelicula(){
    
    this->videos=new Video[1];

    this->npeliculas=0;
}
Pelicula::Pelicula(Video * videos,int npeliculas ){
    
    this->videos=videos;
   
    this->npeliculas=npeliculas;
}
void Pelicula::print(){
    for(int i=0;i<this->npeliculas;i++){
        videos[i].imprimir();
        cout<<"\n"<<endl;
    }
}
