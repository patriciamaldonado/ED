INC = .
OBJ = .
SRC = .
BIN = bin
CXX = g++
CPPFLAGS = #-Wall -g


all: $(BIN)/cantidadletras

# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

	
# ************ Compilación de módulos ************

$(BIN)/cantidadletras : $(OBJ)/conjuntoletras.o $(OBJ)/cantidadletras.o  $(OBJ)/diccionario.o
	$(CXX) -o $(BIN)/cantidadletras $(OBJ)/conjuntoletras.o $(OBJ)/cantidadletras.o  $(OBJ)/diccionario.o

$(OBJ)/cantidadletras.o : 
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/cantidadletras.o $(SRC)/cantidadletras.cpp

$(OBJ)/conjuntoletras.o : $(INC)/conjuntoletras.h
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/conjuntoletras.o $(SRC)/conjuntoletras.cpp

$(OBJ)/diccionario.o : 
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/diccionario.o $(SRC)/diccionario.cpp


# ************ Limpieza ************
run : all
	./$(BIN)/cantidadletras diccionario1.txt letras.txt a

clean :
	echo "Limpiando..."
	rm -f $(OBJ)/*.o

mrproper : clean
	rm -f $(BIN)/* doc/html/*
