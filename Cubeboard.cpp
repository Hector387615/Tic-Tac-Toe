#include "Cubeboard.h"
#include "Tablero.h"

void Cubeboa::crea_tabl1(){
  Tablero m1;
  tabl1 = m1;
}

void Cubeboa::crea_tabl2(){
  Tablero m2;
  tabl1 = m2;
}

void Cubeboa::crea_tabl3(){
  Tablero m3;
  tabl1 = m3;
}

Tablero Cubeboa::get_Tabl1(){
  return tabl1;
};

Tablero Cubeboa::get_Tabl2(){
  return tabl2;
};

Tablero Cubeboa::get_Tabl3(){
  return tabl3;
};

bool Cubeboa::Comprobar(Tablero t1, Tablero t2, Tablero t3){

  //Tablero 1
  std::string v1_0_0 = t1.obtener_posicion1();
  std::string v1_1_0 = t1.obtener_posicion2();
  std::string v1_2_0 = t1.obtener_posicion3();
  std::string v1_0_1 = t1.obtener_posicion4();
  std::string v1_1_1 = t1.obtener_posicion5();
  std::string v1_2_1 = t1.obtener_posicion6();
  std::string v1_0_2 = t1.obtener_posicion7();
  std::string v1_1_2 = t1.obtener_posicion8();
  std::string v1_2_2 = t1.obtener_posicion9();

  //Tablero 2
  std::string v2_0_0 = t2.obtener_posicion1();
  std::string v2_1_0 = t2.obtener_posicion2();
  std::string v2_2_0 = t2.obtener_posicion3();
  std::string v2_0_1 = t2.obtener_posicion4();
  std::string v2_1_1 = t2.obtener_posicion5();
  std::string v2_2_1 = t2.obtener_posicion6();
  std::string v2_0_2 = t2.obtener_posicion7();
  std::string v2_1_2 = t2.obtener_posicion8();
  std::string v2_2_2 = t2.obtener_posicion9();

  //Tablero 3
  std::string v3_0_0 = t3.obtener_posicion1();
  std::string v3_1_0 = t3.obtener_posicion2();
  std::string v3_2_0 = t3.obtener_posicion3();
  std::string v3_0_1 = t3.obtener_posicion4();
  std::string v3_1_1 = t3.obtener_posicion5();
  std::string v3_2_1 = t3.obtener_posicion6();
  std::string v3_0_2 = t3.obtener_posicion7();
  std::string v3_1_2 = t3.obtener_posicion8();
  std::string v3_2_2 = t3.obtener_posicion9();

  if (v1_0_0 != " " && v1_0_0 == v2_0_0 && v1_0_0 == v3_0_0){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }
  else if(v1_1_0 != " " && v1_1_0 == v2_1_0 && v1_1_0 == v3_1_0){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_2_0 != " " && v1_2_0 == v2_2_0 && v1_2_0 == v3_2_0){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_0_1 != " " && v1_0_1 == v2_0_1 && v1_0_1 == v3_0_1){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_1_1 != " " && v1_1_1 == v2_1_1 && v1_1_1 == v3_1_1){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_2_1 != " " && v1_2_1 == v2_2_1 && v1_2_1 == v3_2_1){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_0_2 != " " && v1_0_2 == v2_0_2 && v1_0_2 == v3_0_2){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_1_2 != " " && v1_1_2 == v2_1_2 && v1_1_2 == v3_1_2){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }

  else if(v1_2_2 != " " && v1_2_2 == v2_2_2 && v1_2_2 == v3_2_2){
    std::cout << "\n -- GAME OVER -- \n \n";
    return true;
  }
  else{
    std::cout<<"";
    return false;
  }
  
}


