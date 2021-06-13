#include "Video.h"
#include <iostream>
#include <string>
using namespace std;

class Pelicula{
    protected:
    Video * videos;
    int npeliculas;

    public:
    Pelicula();
    Pelicula(Video *, int);

    virtual void print();
};