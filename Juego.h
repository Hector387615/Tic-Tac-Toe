#ifndef JUEGO_H
#define JUEGO_H
#include "Jugador.h"
#include "Cubeboard.h"

class Juego{
  private: 
    Jugador jugador_1;
    Jugador jugador_2;
    Cubeboa Cubo;

  public:

    Juego(){};
    Juego(Jugador jugador_1, Jugador jugador_2, Cubeboa Cubo){};

    void crear_primer_jugador(std::string, std::string);
    void crear_segundo_jugador(std::string, std::string);
    void crea_cubo();
    Jugador get_jugador_1();
    Jugador get_jugador_2();
    Cubeboa get_Cubo();
  
};


#endif