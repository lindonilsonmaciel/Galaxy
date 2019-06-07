# Apresentação

Olá, me chamo Lindonilson Maciel e sou aluno do curso **Bacharelado em Tecnologia da Informação (BTI)** pela **Universidade Federal do Rio Grande do Norte(RN)**, resolvi fazer esse projeto simples de um jogo que eu gosto muito de jogar. [Galaxy Chat & Play.](https://in-galaxy.com/pt)
Como eu disse, o projeto é simples (Sem interfaces gráficas, todo feito pelo terminal mesmo) e possui poucas funcionalidades. Resolvi fazê-lo apenas para praticar alguns conhecimentos adquiridos durante meu semestre na faculdade. 


***Formas de Contato***
Telegram - [@LinMaciel](https://t.me/LinMaciel)

Twitter - [@**lin_winchester**](https://twitter.com/lin_winchester)

# Funcinalidades

Por enquanto ele possui as funcionalidades:

 

 - Calcular Tempo de Prisão.
 - Quantos Pontos (Estreslas e Rubis) São Necessários Para Sua Próxima Autoridade.

## Sobre as Funcionalidades

**Calcular Tempo de Prisão** - O jogo possui algumas funcionalidades, uma delas é de poder aprisionar outro em uma sala separa (chamada de prisão), quanto mais pontos você tiver, mais tempo poderá colocar usuários nesta sala separada das outras.

**Quantos Pontos São Necessários Para Sua Próxima Autoridade** - Como o jogo funciona com pontos, quanto mais pontos você tiver, maior for sua autoridade (Um status dado a você quando você consegue atingir determinado número de pontos) maior será sua autoridade.
## Calcular Tempo de Prisão

Será exibido um menu para escolher como você deseja calcular esse tempo.

**Por Pontos** - Você digita quantos pontos você tem atualmente e ele devolve o tempo em dias, horas e minutos.

**Por Minutos** - Você digita quantos minutos você prende atualmente e ele devolve o tempo em dias, horas e minutos.

## Quantos Pontos São Necessários Para Sua Próxima Autoridade

Será exibida uma mensagem pedindo para informar a quantidade de pontos que você possui atualmente (Deve ser maior ou igual a zero e menor do que a autoridade que você deseja alcançar), depois é solicitado a quantidade de pontos que você deseja alcançar (Que deve ser maior que a sua quantidade atual de pontos) e então o programa retornará qual seu progresso atual até a próxima autoridade (em %) e quantos rubis (se precisar) e estrelas você precisa até a próxima autoridade.

## Instalação e Execução no Linux

Após ter baixado a pasta com os arquivos a instação é bem simples.
Digite `make` no seu terminal e a instalação será feita, para executar basta digitar `make run`.

## Deletando Arquivos

Para excluir alguns arquivos que não serão mais úteis depois da instalação, digite `make clean` no terminal de seu Linux.


## Excluindo o Programa

Caso não deseje mais utilizar o programa em seu computador, basta excluir a pasta com todos os arquivos, caso deseje manter os arquivos você pode excluir apenas o executável, digitando o seguinte comando `make rmproper` e o instalador será excluído.

# Agradecimentos

Agradeço a todos que tiraram um pouco de seu tempo para dar uma olhada em meu projeto, como podem ver o projeto é bastante simples, apenas para ter mais um motivo para eu programar enquanto jogo.
Ficarei extremamente feliz caso tenham sugestões para me dar e mais feliz ainda caso deixem algum feedback, principalmente se for em o que eu posso melhorar.