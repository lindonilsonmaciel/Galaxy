#include <iostream>
#include "Autoridade.h"

int votos, starBronze, starOuro,starPrata, starOuroGrande;
int rubiVermelho, rubiAzul, rubiVerde, rubiBranco, rubiRoxo;

int proximaAuto(int atual, int desejada){
    if ((desejada - atual) > 0){
        return desejada - atual;
    }else{
        std::cout << "A Autoridade Desejada Precisa Ser Maior!!" << '\n';
        return 0;
    }
    
}

void calcularStarRubi(int pontos){
    rubiRoxo = pontos/1171875;
    rubiBranco = (pontos%1171875)/234375;
    rubiVerde = ((pontos%1171875)%234375)/46875;
    rubiAzul = (((pontos%1171875)%234375)%46875)/9375;
    rubiVermelho = ((((pontos%1171875)%234375)%46875)%9375)/1875;
    starOuroGrande = (((((pontos%1171875)%234375)%46875)%9375)%1875)/375;
    starPrata = ((((((pontos%1171875)%234375)%46875)%9375)%1875)%375)/75;
    starOuro = (((((((pontos%1171875)%234375)%46875)%9375)%1875)%375)%75)/25;
    starBronze = ((((((((pontos%1171875)%234375)%46875)%9375)%1875)%375)%75)%25)/5;
    votos = (((((((((pontos%1171875)%234375)%46875)%9375)%1875)%375)%75)%25)%5)/1;
}

void progressoParaProximaAuto(int atual, int desejada){
    int porcentagem = (atual*100)/desejada;
    std::cout << "Seu Progresso Para A Autoridade Desejada Está Em " << porcentagem << "%." << '\n';
    std::cout << "--------------------------------------" << '\n';
    std::cout << '\n';
}

void imprimir(){
    std::cout << "Você Precise De... " << '\n';
    std::cout << '\n';
    std::cout << "--------------------------------------" << '\n';
    if(rubiRoxo > 0){std::cout << rubiRoxo << " - Rubi(s) Roxo" << '\n';}
    if(rubiBranco){std::cout << rubiBranco << " - Rubi(s) Branco" << '\n';}
    if(rubiVerde){std::cout << rubiVerde << " - Rubi(s) Verde" << '\n';}
    if(rubiAzul){std::cout << rubiAzul << " - Rubi(s) Azul" << '\n';}
    if(rubiVermelho){std::cout << rubiVermelho << " - Rubi(s) Vermelho" << '\n';}
    if(starOuroGrande){std::cout << starOuroGrande << " - Estrela(s) de Ouro Grande" << '\n';}
    if(starPrata){std::cout << starPrata << " - Estrela(s) de Prata" << '\n';}
    if(starOuro){std::cout << starOuro << " - Estrela(s) de Ouro Pequena" << '\n';}
    if(starBronze){std::cout << starBronze << " - Estrela(s) de Bronze" << '\n';}
    if(votos){std::cout << votos << " - Votos" << '\n';}
    std::cout << "--------------------------------------" << '\n';
}


void escolhaAutoridade(){
    int atual, desejada, pontos;
    std::cout << "Seja Bem Vindo!!" << '\n';
    std::cout << '\n';
    std::cout << "--------------------------------------" << '\n';
    std::cout << "Vamos Descobrir Quanto Falta Para Você Chegar Na Sua Próxima Aura?" << '\n';
    std::cout << "\nDigite Sua Autoridade Atual: (Os Pontos Atuais)" << '\n';
    std::cout << ">>> ";
    std::cin >> atual;
    std::cout << '\n';
    std::cout << "Agora Digite A Autoridade Desejada: (Os Pontos Da Autoridade Desejada)" << '\n';
    std::cout << ">>> ";
    std::cin >> desejada;
    std::cout << '\n';
    std::cout << "--------------------------------------" << '\n';
    pontos = proximaAuto(atual, desejada);
    if (pontos > 0){
        calcularStarRubi(pontos);
        progressoParaProximaAuto(atual, desejada);
        imprimir();
    }else{
        std::cout << "Você Digitou A Pontuação Atual Menor Que A Desejada!!!" << '\n';
    }
}

void menuAutoridade(){
    int op;
    do{
        escolhaAutoridade();
        //system("pause");
        //system("clear||cls");
        std::cout << '\n';
        std::cout << "ESCOLHA UMA OPCÃO..." << '\n';
        std::cout << "[ 1 ] Continuar !!" << '\n';
        std::cout << "[ 0 ] Voltar" << '\n';
        std::cout << ">>> ";
        std::cin >> op;
        if (op == 0){
            break;
        }else if (op != 1){
            std::cout << "OPÇÃO INVÁLIDA!!!";
        }
    } while (op == 1);
}