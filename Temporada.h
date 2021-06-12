#include <iostream>
#include "Episodios.h"

using namespace std;

class Temporada : public Episodios // Hereda de episodios. La creamos por facilidad de agrupamiento de episodios. 
{
  private:
  Episodios* EpisodiosEnTemporada;
  double Calificacion;
  int numTemp;
  int numEp;
  
  public:
  Temporada();
  Temporada(Episodios*, double, int,int);
  Episodios getEpisodio(int numEP);
  int getNumEpisodios();
  double getCalificacion();
  void setEpisodio(int num, Episodios newEpisodio);
  void print();
};