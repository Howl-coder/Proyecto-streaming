#include "Videoteca.h"

#include <iostream>
#include <string>

using namespace std;


int main(){
  //Creación de dos peliculas para la videoteca
  Video v1(1, "La toalla del mojado" , "01-34-00" , "comedia",10);
  Video v2(2, "Batman" , "02-34-00" , "accion",9.9);

  Video * videos= new Video[2];
    videos[0]=v1;
    videos[1]=v2;

  Pelicula p1(videos,2);

  // Prueba de Episodios para Serie 1
  // Definimos los episodios
  Episodios A("El Retorno"), 
            B("La Muerte"), 
            C("La Venganza"), 
            D("La caida del grande"), 
            E("Cancelada por Falta de Fondos"), 
            F("Comienzo"), 
            G("Introduccion"), 
            H("Muerte"), 
            I("Climax"), 
            J("Final");


  //Creación de temporadas para Serie 1
  Episodios ep1_1[2] = { A,B}; 
  Episodios ep2_1[2] = { C,D};

  Temporada Temp1_1(ep1_1, 9.5, 1, 2),
            Temp2_1(ep2_1, 9, 2, 2);

  Temporada temporadas1[2] = { Temp1_1,Temp2_1};

  //Creación de temporadas para Serie 2
  Episodios ep1_2[3] = { E,F,G}; 
  Episodios ep2_2[3] = { H,I,J};

  Temporada Temp1_2(ep1_2, 10, 1, 3),
            Temp2_2(ep2_2, 8, 2, 3);

  Temporada temporadas2[2] = { Temp1_2,Temp2_2};

  //Creación de Series para Videoteca
  Series serie1(3, "La decepcion de la realidad" , "01 - 34 - 00" , "Tragedia" ,10, temporadas1,2);

  Series serie2(4, "Horror en las calles" , "01 - 26 - 55" , "Terror" ,10, temporadas2,2);

  //Creación de Videoteca

  Series SeriesVideoteca[2];

  SeriesVideoteca[0] = serie1;
  SeriesVideoteca[1] = serie2;

  Videoteca videoteca1(p1,SeriesVideoteca,2);

  //Impresión de la Videoteca
  videoteca1.print();

  return 0;


}

