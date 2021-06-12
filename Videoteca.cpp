#include <iostream>
#include "Videoteca.h"
using namespace std;

Videoteca::Videoteca(){
  this->catPeliculas = Pelicula();
  this->catSeries = new Series[1];

  this->numSeries = 1;
}

Videoteca::Videoteca(Pelicula catPeliculas,Series * catSeries,int numSeries){
  this->catPeliculas = catPeliculas;
  this->catSeries = catSeries;

  this->numSeries = numSeries;
}

void Videoteca::print(){
  cout<<"Peliculas y Series disponibles"<<"\n"<<endl;

  cout<<"   Peliculas"<<"\n"<<endl;

  catPeliculas.print();

  cout<<"   Series"<<"\n"<<endl;

  for(int i=0;i<numSeries;i++){
    catSeries[i].imprimir();
  }

}