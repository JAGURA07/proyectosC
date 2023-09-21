#include <iostream>

class Funcion{
  protected:
    int nvars;
    // double fx;

  public:
    Funcion(){};
    ~Funcion(){};
    virtual double evalua(const double *x) = 0;
};


class FuncionR2aR : public Funcion{
  public:
    int algo;
    double evalua(const double *x){
      return x[0]*x[0] + x[1]*x[1];
    }
    FuncionR2aR(){};
    ~FuncionR2aR(){};
};


class FuncionR3aR : public Funcion{
  public:
    int algo;
    double evalua(const double *x){
      return x[0]*x[0] + x[1]*x[1] + x[2]*x[2];
    }
    FuncionR3aR(){};
    ~FuncionR3aR(){};
};


void prueba(Funcion *f1, Funcion *f2, const double *x){
  std::cout << "Función de R2 a R: " << f1->evalua(x) << std::endl;
  std::cout << "Función de R3 a R: " << f2->evalua(x) << std::endl;
}


int main(){
  Funcion* f2 = new FuncionR2aR();
  Funcion* f3 = new FuncionR3aR();

  double x[] = {5.0, 2.0, 3.0};

  prueba(f2, f3, x);

  /*
  // esto no se puede, por eso son de ayuda las funciones
  // puramente virtuales
  FuncionR2aR t();
  prueba(&t, f2);
  */

  delete f3;
  delete f2;
}



/*
SI tengo las clases: Circulo y Cuadrado que haredean de la
super clase FiguraGeometrica y quiero una función
que sume áreas de figuras geométricas cualesquiera
Con funciones puramente virtuales, yo puedo hacer:
void sumaAreas(FiguraGeometrica *fig-1, FiguraGeometrica *fig2){};

void sumaAreasCirculoCuadrado(Circulo c1, Cuadrado c2);
void sumaAreasCirculoCirculo(Circulo c1, Circulo c2);
void sumaAreasCuadradoCuadrado(Cuadrado c1, Cuadrado c2);
*/
