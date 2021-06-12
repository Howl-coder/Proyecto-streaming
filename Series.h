#include <string>
#include <iostream>
#include "Video.h"
#include "Temporada.h"
using namespace std;

class Series:public Video{ // Hereda de video
  protected:
    Temporada* temporadas; // Arreglo de Temporadas que contiene los episodios
    int numTemporadas;

  public:
    Series();
    Series(int newId, string newNombre, string newDuracion, string newGenero, double newCal, Temporada*newTemporadas, int newNum);
    void imprimir(); // Metodo sobrecargado de Video
};