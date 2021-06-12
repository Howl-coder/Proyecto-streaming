#include <iostream>
#include <string>
using namespace std;

class Episodios{
  private:
  string Titulo;

  public:
  Episodios();
  Episodios(string Titulo);
  string getTitulo();
  void setTitulo(string newTitle);
};