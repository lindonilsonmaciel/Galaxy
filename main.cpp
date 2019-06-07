#include <iostream>
#include <stdlib.h>

#include "Autoridade.h"
#include "TempoPrisao.h"

void menuPrincipal();

int main(){
    int op;
    do{
        menuPrincipal();
        std::cin >> op;
        switch (op){
            case 1:
                menuTempoPrisao();
                break;
            case 2:
                menuAutoridade();
                break;
            case 0:
                std::cout << "Saindo..." << '\n';
                break;
            default:
                std::cout << "Opção Inválida!!" << '\n';
                break;
        }
    } while (op != 0);
    
    return 0;
}

void menuPrincipal(){
    std::cout << "SEJA BEM VINDO!!" << '\n';
    std::cout << "--------------------------------------" << '\n';
    std::cout << "Escolha Uma Opção Para Continuar: " << '\n';
    std::cout << '\n';
    std::cout << "[ 1 ] Ver Tempo De Prisão" << '\n';
    std::cout << "[ 2 ] Ver Quanto Falta Para a Próxima Aura" << '\n';
    std::cout << "[ 0 ] Sair" << '\n';
    std::cout << ">>> ";
}