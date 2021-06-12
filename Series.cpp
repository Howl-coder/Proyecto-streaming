#include "Series.h"
using namespace std;

Series::Series(){
  temporadas = new Temporada[1];
  numTemporadas = 0;
}

Series::Series(int newId, string newNombre, string newDuracion, string newGenero, double newCal, Temporada* newTemporadas, int newNum):Video(newId, newNombre, newDuracion, newGenero, newCal){ //Llamamos el constructor de video dentro del constructor de Serie para completar el objeto
  temporadas = newTemporadas;
  numTemporadas = newNum;
}

void Series::imprimir() {
  double cal = 0;
  
  for(int i = 0;i < (numTemporadas); i++){
    cal += temporadas[i].getCalificacion();
  }

  this->calificacion = cal/numTemporadas;
  
  Video::imprimir();
    for (int i = 0; i < (numTemporadas); i++){
        cal += temporadas[i].getCalificacion();
        temporadas[i].print();
        }
}
