#include "Jugador.h"
#include <iostream>

std::string Jugador::get_nombre(){

  return nombre;
};

std::string Jugador::get_simbolo(){

  return simbolo;
};

void Jugador::set_nombre(std::string nom){
  
  nombre = nom;
};

void Jugador::set_simbolo(std::string sim){

  simbolo = sim;
}

std::string Jugador::validar_simbolo(std::string simbol){
  std::string nuevo_simbol;
  
  while (simbol != "O" && simbol != "X"){
    std::cout << "\n simbolo no válido\n ";
    std::cout << " introduce un símbolo válido ";
    std::cin >> nuevo_simbol;
    simbol = nuevo_simbol;
      }
  return simbol;
}




