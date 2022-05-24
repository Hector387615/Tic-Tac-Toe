#ifndef CUBEBOARD_H
#define CUBEBOARD_H
#include <iostream>
#include "Tablero.h"

class Cubeboa{

  private:
      Tablero tabl1;
      Tablero tabl2;
      Tablero tabl3;


  public:
      Cubeboa(){};
      Cubeboa(Tablero tabl1, Tablero tabl2, Tablero tabl3){};
      void crea_tabl1();
      void crea_tabl2();
      void crea_tabl3();

      Tablero get_Tabl1();
      Tablero get_Tabl2();
      Tablero get_Tabl3();
      bool Comprobar(Tablero, Tablero, Tablero);

};

#endif