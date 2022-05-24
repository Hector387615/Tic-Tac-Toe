#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>


class Jugador{
  private:
    std::string nombre;
    std::string simbolo;

  public:
    Jugador():nombre(""),simbolo(""){};
    Jugador(std::string nom, std::string sim):nombre(nom), simbolo(sim){};

    std::string get_nombre();
    std::string get_simbolo();
    void set_nombre(std::string);
    void set_simbolo(std::string);
    std::string validar_simbolo(std::string);

    
};


#endif