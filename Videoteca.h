#include <iostream>
#include "Pelicula.h"
#include "Series.h"

using namespace std;

class Videoteca{ // Agrupamos las series y peliculas dentro de un mismo objeto
  private:
    Pelicula catPeliculas;
    Series * catSeries;
    int numSeries;

  public:
    Videoteca();
    Videoteca(Pelicula catPeliculas, Series * catSeries,int numSeries);
    void print();
};