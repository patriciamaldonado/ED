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


$(BIN)/letras : $(OBJ)/conjuntoletras.o $(OBJ)/letras.o  $(OBJ)/diccionario.o  $(OBJ)/bolsadeletras.o 
	$(CXX) -o $(BIN)/letras $(OBJ)/conjuntoletras.o $(OBJ)/letras.o  $(OBJ)/diccionario.o  $(OBJ)/bolsadeletras.o 

$(OBJ)/letras.o : $(SRC)/letras.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/letras.o $(SRC)/letras.cpp

$(BIN)/cantidadletras : $(OBJ)/conjuntoletras.o $(OBJ)/cantidadletras.o  $(OBJ)/diccionario.o
	$(CXX) -o $(BIN)/cantidadletras $(OBJ)/conjuntoletras.o $(OBJ)/cantidadletras.o  $(OBJ)/diccionario.o

$(BIN)/bolsadeletras : $(OBJ)/conjuntoletras.o $(OBJ)/bolsadeletras.o 
	$(CXX) -o $(BIN)/bolsadeletras $(OBJ)/conjuntoletras.o $(OBJ)/bolsadeletras.o  

$(OBJ)/cantidadletras.o : $(SRC)/cantidadletras.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/cantidadletras.o $(SRC)/cantidadletras.cpp

$(OBJ)/conjuntoletras.o : $(INC)/conjuntoletras.h $(SRC)/conjuntoletras.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/conjuntoletras.o $(SRC)/conjuntoletras.cpp

$(OBJ)/diccionario.o : $(SRC)/diccionario.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/diccionario.o $(SRC)/diccionario.cpp

$(OBJ)/bolsadeletras.o : $(SRC)/bolsadeletras.cpp
	$(CXX) $(CPPFLAGS) -I./$(INC) -c -o $(OBJ)/bolsadeletras.o $(SRC)/bolsadeletras.cpp


# ************ Limpieza ************
run : all
	./$(BIN)/cantidadletras diccionario1.txt letras.txt salida.txt

bolsa: $(BIN)/bolsadeletras

letra: $(BIN)/letras

clean : mrproper
	echo "Limpiando..."
	rm -f $(OBJ)/*.o

mrproper : clean
	rm -f $(BIN)/* doc/html/*
