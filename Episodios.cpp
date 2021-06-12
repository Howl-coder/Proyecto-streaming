#include "Episodios.h"
using namespace std;

Episodios::Episodios(){
  Titulo = "NA";
}

Episodios::Episodios(string newTitulo){
  Titulo = newTitulo;
}

string Episodios::getTitulo(){
  return Titulo;
}

void Episodios::setTitulo(string newTitulo){
  Titulo = newTitulo;
}
