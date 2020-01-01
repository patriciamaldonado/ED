#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include "diccionario.h"
#include "bolsadeletras.h"
#include "conjuntoletras.h"

using namespace std;



int main(int argc, char const *argv[]) {

  if(argc != 5){
    cout<<"Ejecución: letras diccionario1.txt salida.txt numerodeLetras8 modalidad(L o P)"<<endl;
       return 0;
  }

  ifstream fdiccionario (argv[1]);
  if (!fdiccionario){
   cout<<"No puedo abrir el fichero  "<<argv[1]<<endl;
   return 0;
  }

  ifstream fsalidatxt (argv[2]);
  if (!fsalidatxt){
   cout<<"No puedo abrir el fichero "<<argv[2]<<endl;
   return 0;
  }

  Diccionario midiccionario;
  fdiccionario >> midiccionario;
  //El operador de entrada del conjunto deberia de leer salidatxt
  // que tiene un formato diferente a letras.txt
  //OPCION B usar el operador de entrada de bolsa de letras y leer
  // de ahi salidatxt

  Conjuntoletras con;
  fsalidatxt >> con;
  cout << con << endl;
  int longitud = atoi(argv[3]);
  Bolsaletras mibolsa(longitud,con); // genera las letras aleatorias
  string palabraJugador;
  char p[mibolsa.sizeVectorenJuego()];




  cout << "Dime tu palabra: ";
  cin >> palabraJugador;
  bool esta = midiccionario.Esta(palabraJugador);
  if(esta){
    cout << "La palabra está en el diccionario"<<endl;
  }
  else {
    cout << "La palabra no está en el diccionario"<<endl;

  }

for (int i = 0; i < mibolsa.sizeVectorenJuego(); i++) {
  p[i] = mibolsa.getletraEnjuego(i);
  cout << "sarandongaaaaaaaaa " <<mibolsa.getletraEnjuego(i) <<endl;
}



//cin>>p;
int len = strlen(p);
sort(p, p+len);
do {
//if(Diccionario::Esta(p)){
cout << p << endl;
//}
} while (next_permutation(p, p+len));








}