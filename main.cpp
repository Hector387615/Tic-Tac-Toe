#include <iostream>
#include "Jugador.h"
#include "Tablero.h"
#include "Cubeboard.h"
#include "Juego.h"

/*ideas:  
desde función cubeboard verificar individualmente cada gato


//crear función para checar individualemente cada gato, y luego una entre sus relaciones

-Poner en clase Juego(), incio del juego con el menú bienvenida y fin del juego

-Crear con composición los jugadores tal vez, checa si puedes escribir desde ahí el nombre y símbolo
*/


void imprimir_tableros(Tablero primer, Tablero segundo, Tablero tercero){
  std::cout << "Primer Tablero \n";
  primer.Imprimir_tablero();
  std::cout << "Segundo Tablero \n";
  segundo.Imprimir_tablero();
  std::cout << "Tercer Tablero \n";
  tercero.Imprimir_tablero();

  std::cout << "******************************************************** \n";
  }


int main() {

  Tablero tabl1;
  Tablero tabl2;
  Tablero tabl3;
  
  std::string nombre_1;
  std::string simbolo_1;
  std::string nombre_2;
  std::string simbolo_2;
  bool ganar_1;
  bool ganar_2;
  bool ganar_3;
  bool ganar_inter;

  int turno;
  int columna;
  int fila;
  int numero_juego;
  Jugador Primer_jugador;
  Jugador Segundo_jugador;
  Cubeboa Cubo;
  
  

  Juego partida;

  //Crear objeto partida y con composición sus jugadores
  partida.crear_primer_jugador(nombre_1, simbolo_1);
  partida.crear_segundo_jugador(nombre_2,simbolo_2);
  //asignas variables a objetos jugadores
  Primer_jugador = partida.get_jugador_1();
  Segundo_jugador = partida.get_jugador_2();

  Cubo =partida.get_Cubo();
  Cubo.crea_tabl1();
  Cubo.crea_tabl2();
  Cubo.crea_tabl3();

  tabl1 = Cubo.get_Tabl1();
  tabl2 = Cubo.get_Tabl2();
  tabl3 = Cubo.get_Tabl3();

 
  
  std::cout << "Bienvenido al gato 3D, por favor especifica el nombre del primer jugador: ";

  
  std::cin >> nombre_1;
  Primer_jugador.set_nombre(nombre_1);

  std::cout << "Especifica el símbolo del primer jugador O/X: ";
  std::cin >> simbolo_1;
  simbolo_1 = Primer_jugador.validar_simbolo(simbolo_1);
  Primer_jugador.set_simbolo(simbolo_1);

  std::cout << "Especifica el nombre del segundo jugador: ";
  std::cin >> nombre_2;
  Segundo_jugador.set_nombre(nombre_2);

  std::cout << "Especifica el símbolo del segundo jugador O/X: ";
  std::cin >> simbolo_2;
  simbolo_2 = Segundo_jugador.validar_simbolo(simbolo_2);
  Segundo_jugador.set_simbolo(simbolo_2);

  //  Quién Empieza
  if (simbolo_1 == "O" || simbolo_1 == "o"){
    turno = 0;
    
  } 
    
  else{
    turno = 1;
  }
  

  Cubeboa coleccion(tabl1, tabl2, tabl3);
  
  ganar_1 = tabl1.Checar_victoria_en_tablero();
  ganar_2 = tabl2.Checar_victoria_en_tablero();
  ganar_3 = tabl3.Checar_victoria_en_tablero();
  ganar_inter = coleccion.Comprobar(tabl1, tabl2, tabl3);

  
  
  
//CASO DE QUE EL JUGADOR 2 HAYA PUESTO O
  if (turno == 1){
    while (ganar_1 == false && ganar_2 == false && ganar_3 == false && ganar_inter == false){
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      std::cout << "Ahora es turno de: "<< nombre_2 << "\n";
      std::cout << "Dame el número del tablero: ";
      std::cin >> numero_juego;
      std::cout << "Dame una columna: ";
      std::cin >> columna;
      std::cout << "Dame una fila: ";
      std::cin >> fila;
      if (numero_juego == 1){
        
      
        tabl1.Poner_simbolo(columna,fila,simbolo_2);
      }
      else if(numero_juego == 2){
        
        tabl2.Poner_simbolo(columna,fila,simbolo_2);
      }
      else if (numero_juego == 3){
        
        tabl3.Poner_simbolo(columna,fila,simbolo_2);
      }
      ganar_1 = tabl1.Checar_victoria_en_tablero();
      ganar_2 = tabl2.Checar_victoria_en_tablero();
      ganar_3 = tabl3.Checar_victoria_en_tablero();
      ganar_inter = coleccion.Comprobar(tabl1,tabl2,tabl3);

      imprimir_tableros(tabl1, tabl2, tabl3);
      
      if (ganar_1 == true || ganar_2 == true || ganar_3 == true|| ganar_inter == true){
        break;
      }
      
      imprimir_tableros(tabl1, tabl2, tabl3);

      std::cout << "Ahora es turno de: "<< nombre_1 << "\n";
      std::cout << "Dame el número del tablero: ";
      std::cin >> numero_juego;
      std::cout << "Dame una columna: ";
      std::cin >> columna;
      std::cout << "Dame una fila: ";
      std::cin >> fila;
      if (numero_juego == 1){
        
        
        tabl1.Poner_simbolo(columna,fila,simbolo_1);
      }
      else if(numero_juego == 2){
        
        tabl2.Poner_simbolo(columna,fila,simbolo_1);
      }
      if (numero_juego == 3){
        
        tabl3.Poner_simbolo(columna,fila,simbolo_1);
      }
      
      ganar_1 = tabl1.Checar_victoria_en_tablero();
      ganar_2 = tabl2.Checar_victoria_en_tablero();
      ganar_3 = tabl3.Checar_victoria_en_tablero();
      ganar_inter = coleccion.Comprobar(tabl1,tabl2,tabl3);
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      
      if (ganar_1 == true || ganar_2 == true || ganar_3 == true|| ganar_inter == true){
        break;
      }
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      
      
  }
  }
///////////////
  else if (turno == 0){
    while (ganar_1 == false && ganar_2 == false && ganar_3 == false && ganar_inter == false){
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      std::cout << "Ahora es turno de: "<< nombre_1 << "\n";
      std::cout << "Dame el número del tablero: ";
      std::cin >> numero_juego;
      std::cout << "Dame una columna: ";
      std::cin >> columna;
      std::cout << "Dame una fila: ";
      std::cin >> fila;
      if (numero_juego == 1){
        
      
        tabl1.Poner_simbolo(columna,fila,simbolo_1);
      }
      else if(numero_juego == 2){
        
        tabl2.Poner_simbolo(columna,fila,simbolo_1);
      }
      else if (numero_juego == 3){
        
        tabl3.Poner_simbolo(columna,fila,simbolo_1);
      }
      ganar_1 = tabl1.Checar_victoria_en_tablero();
      ganar_2 = tabl2.Checar_victoria_en_tablero();
      ganar_3 = tabl3.Checar_victoria_en_tablero();
      ganar_inter = coleccion.Comprobar(tabl1,tabl2,tabl3);

      imprimir_tableros(tabl1, tabl2, tabl3);
      
      if (ganar_1 == true || ganar_2 == true || ganar_3 == true|| ganar_inter == true){
        break;
      }
      
      imprimir_tableros(tabl1, tabl2, tabl3);

      std::cout << "Ahora es turno de: "<< nombre_2 << "\n";
      std::cout << "Dame el número del tablero: ";
      std::cin >> numero_juego;
      std::cout << "Dame una columna: ";
      std::cin >> columna;
      std::cout << "Dame una fila: ";
      std::cin >> fila;
      if (numero_juego == 1){
        
        
        tabl1.Poner_simbolo(columna,fila,simbolo_2);
      }
      else if(numero_juego == 2){
        
        tabl2.Poner_simbolo(columna,fila,simbolo_2);
      }
      if (numero_juego == 3){
        
        tabl3.Poner_simbolo(columna,fila,simbolo_2);
      }
      
      ganar_1 = tabl1.Checar_victoria_en_tablero();
      ganar_2 = tabl2.Checar_victoria_en_tablero();
      ganar_3 = tabl3.Checar_victoria_en_tablero();
      ganar_inter = coleccion.Comprobar(tabl1,tabl2,tabl3);
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      
      if (ganar_1 == true || ganar_2 == true || ganar_3 == true|| ganar_inter == true){
        break;
      }
      
      imprimir_tableros(tabl1, tabl2, tabl3);
      
      
  }
  }
  
    
  return 0;
  
  
}