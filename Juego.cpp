#include "Juego.h"
#include "Jugador.h"
#include "Cubeboard.h"

void Juego::crea_cubo(){
  Cubeboa m1;
  Cubo = m1;
}

void Juego::crear_primer_jugador(std::string nombre, std::string simbolo){
  Jugador m1(nombre,simbolo);
  jugador_1 = m1;
};

void Juego::crear_segundo_jugador(std::string nombre, std::string simbolo){
  Jugador m2(nombre,simbolo);
  jugador_2 = m2;
};

Jugador Juego::get_jugador_1(){
  return jugador_1;
}

Jugador Juego::get_jugador_2(){
  return jugador_2;
}

Cubeboa Juego::get_Cubo(){
  return Cubo;
}