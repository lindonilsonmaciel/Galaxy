ARQUIVOS = main.cpp Autoridade.cpp TempoPrisao.cpp
OBJETOS = $(ARQUIVOS:.cpp=.o)
COMPILADOR = g++
PROGRAMAS = Galaxy
OPCOES = -std=c++11

all: $(PROGRAMAS)

$(PROGRAMAS): $(OBJETOS)
	$(COMPILADOR) -o $@ $^ $(OPCOES)

$.o: %.cpp
	$(COMPILADOR) $(OPCOES) -c $^

clean:
	rm -rf *.o

rmproper: clean
	rm $(PROGRAMAS)

run: $(PROGRAMAS)
	./$(PROGRAMAS)