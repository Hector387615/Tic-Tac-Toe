#include "Tablero.h"

void Tablero::Imprimir_tablero(){


  std::cout<<"\t\t     |      |     \n";
	std::cout<<"\t\t  "<<tablero[0][0]<<"  |   "<<tablero[1][0]<<"  |  "<<tablero[2][0]<<"\n";
	std::cout<<"\t\t_____|______|_____\n";
	std::cout<<"\t\t     |      |     \n";
	std::cout<<"\t\t  "<<tablero[0][1]<<"  |   "<<tablero[1][1]<<"  |  "<<tablero[2][1]<<"  \n";
	std::cout<<"\t\t_____|______|_____\n";
	std::cout<<"\t\t     |      |     \n";
	std::cout<<"\t\t  "<<tablero[0][2]<<"  |   "<<tablero[1][2]<<"  |  "<<tablero[2][2]<<"  \n";
	std::cout<<"\t\t     |      |     \n";
  std::cout<<"\n";
  
};

std::string Tablero::obtener_posicion1(){
  valor_0_0 = tablero[0][0];

  return valor_0_0;
            
}
std::string Tablero::obtener_posicion2(){
  valor_1_0 = tablero[1][0];

  return valor_1_0;
            
}
std::string Tablero::obtener_posicion3(){
  valor_2_0 = tablero[2][0];

  return valor_2_0;
            
}

std::string Tablero::obtener_posicion4(){
  valor_0_1 = tablero[0][1];

  return valor_0_1;
            
}
std::string Tablero::obtener_posicion5(){
  valor_1_1 = tablero[1][1];

  return valor_1_1;
            
}
std::string Tablero::obtener_posicion6(){
  valor_2_1 = tablero[2][1];

  return valor_2_1;
            
}
std::string Tablero::obtener_posicion7(){
  valor_0_2 = tablero[0][2];

  return valor_0_2;
            
}
std::string Tablero::obtener_posicion8(){
  valor_1_2 = tablero[1][2];

  return valor_1_2;
            
}

std::string Tablero::obtener_posicion9(){
  valor_2_2 = tablero[2][2];

  return valor_2_2;
            
}

void Tablero::Poner_simbolo(int col,int fil, std::string simb){
   col = col-1;
  fil = fil-1;
  
  while (tablero[col][fil] != " " ){

    std::cout << "selecciona una columna válida";
    std::cin >> col;
    col = col-1;
    

    std::cout << "selecciona una nueva fila válida";
    std::cin >> fil;
    fil = fil-1;
    
  }
  tablero[col][fil] = simb;
  
};

bool Tablero::Checar_victoria_en_tablero(){
  
  if (tablero[0][0] != " " && tablero[0][0] == tablero[1][0] && tablero [0][0] == tablero[2][0]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }
  else if(tablero[0][1] != " " && tablero[0][1] == tablero[1][1] && tablero [0][1] == tablero[2][1]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }

  else if(tablero[0][2] != " "&& tablero[0][2] == tablero[1][2] && tablero [0][2] == tablero[2][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }
    
else if(tablero[0][0] != " " && tablero[0][0] == tablero[0][1] && tablero [0][0] == tablero[0][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }

  else if(tablero[1][0] != " "&& tablero[1][0] == tablero[1][1] && tablero [1][0] == tablero[1][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }
    
  else if(tablero[2][0] != " " && tablero[2][0] == tablero[2][1] && tablero [2][0] == tablero[2][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }
    
  else if(tablero[0][0] != " " && tablero[0][0] == tablero[1][1] && tablero [0][0] == tablero[2][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }
    
  else if(tablero[2][0] != " " && tablero[2][0] == tablero[1][1] && tablero [2][0] == tablero[0][2]){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  
  }
  else{
    std::cout<<"";
    return false;
  }
  
};


