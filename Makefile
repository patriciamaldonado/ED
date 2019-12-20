INC = .
OBJ = .
SRC = .
BIN = bin
CXX = g++
CPPFLAGS = #-Wall -g


all: $(BIN)/usoconjuntoletras

	
# ************ Compilación de módulos ************
$(BIN)/usoconjuntoletras : $(OBJ)/conjuntoletras.o
	$(CXX) -o ./usoconjuntoletras $(SRC)/conjuntoletras.cpp




clean :
	echo "Limpiando..."
	rm -f $(OBJ)/*.o

mrproper : clean
	rm -f $(BIN)/* doc/html/*
