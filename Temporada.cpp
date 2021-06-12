#include <iostream>
#include "Temporada.h"

using namespace std;

Temporada::Temporada(){
  EpisodiosEnTemporada = new Episodios[1];
  Calificacion = 0;
  numTemp = -1;
  numEp = 0;
}

Temporada::Temporada(Episodios* newEpisodios, double newCal, int newTemp, int newEp){
  EpisodiosEnTemporada = newEpisodios;
  Calificacion = newCal;
  numTemp = newTemp;
  numEp = newEp;
}

Episodios Temporada::getEpisodio(int numEp){
  return EpisodiosEnTemporada[numEp];
}

int Temporada::getNumEpisodios(){
  return numEp;
}

double Temporada::getCalificacion(){
  return this->Calificacion;
}

void Temporada::setEpisodio(int num, Episodios newEpisodio){
  EpisodiosEnTemporada[num] = newEpisodio;
}

void Temporada::print(){ // Metodo de impresión para todos los episodios dentro de una temporada.
  cout << "\nTemporada: " << numTemp << "\nCalificación: " << Calificacion << "\n" <<endl;
  for (int i = 0; i < numEp; i++){
    cout << "Episodio: " << i+1 << "\nTitulo: " << EpisodiosEnTemporada[i].getTitulo() << "\n" << endl;
  }
}