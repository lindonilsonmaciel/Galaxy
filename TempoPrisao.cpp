#include <iostream>

#include "TempoPrisao.h"

void menuTempoPrisao(){
  int op;
  do {
    op = 0;
    menu();
    std::cin >> op;
    if (op == 1) {
      std::cout << "Digite quantos pontos você tem: " << '\n';
      int pontos;
      std::cin >> pontos;
      calcularTempoPrisaoPontos(pontos);
    }else if(op == 2){
      std::cout << "Digite quantos minutos você prende: " << '\n';
      int minutos;
      std::cin >> minutos;
      calcularTempoPrisaoMinutos(minutos);
    }else if(op != 0){
      std::cout << "Opcao Inválida!!!" << '\n';
      //system("pause");
    }
  } while(op != 0);
}

void calcularTempoPrisaoMinutos(int minutos){
  int horas = minutos/60;
  minutos = minutos%60;
  int dias = horas/24;
  horas = horas%24;
  std::cout << '\n';
  std::cout << "Você prende " << dias << " dias " << horas << " horas e " << minutos << " minutos." << '\n';
  //system("pause");
}

void calcularTempoPrisaoPontos(int pontos){
  int segundos = pontos * 30;
  int minutos = segundos/60;
  calcularTempoPrisaoMinutos(minutos);
}

void menu(){
  //system("cls");
  std::cout << '\n';
  std::cout << "ESCOLHA UMA OPCÃO..." << '\n';
  std::cout << "[ 1 ] Por Pontos" << '\n';
  std::cout << "[ 2 ] Por Minutos" << '\n';
  std::cout << "[ 0 ] Voltar" << '\n';
  std::cout << ">>> ";
}