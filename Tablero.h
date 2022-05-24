#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>


#include "Jugador.h"
class Tablero{
  private:
    std::string tablero[3][3] = {{" "," "," "},{" "," "," "} ,{" "," "," "}};
    int col; 
    int fil;
    std::string simb();
    std::string valor_0_0;
    std::string valor_1_0;
    std::string valor_2_0;  
    std::string valor_0_1;
    std::string valor_1_1;
    std::string valor_2_1;
    std::string valor_0_2;
    std::string valor_1_2;
    std::string valor_2_2;


  public:
    Tablero(){};
    void Imprimir_tablero();
    void Poner_simbolo(int fil, int col, std::string simb);
    bool Checar_victoria_en_tablero();
    std::string obtener_posicion1();
    std::string obtener_posicion2();
    std::string obtener_posicion3();
    std::string obtener_posicion4();
    std::string obtener_posicion5();
    std::string obtener_posicion6();
    std::string obtener_posicion7();
    std::string obtener_posicion8();
    std::string obtener_posicion9();

};

#endif