#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <cstring>
#include <algorithm>
#include "diccionario.h"
#include "bolsadeletras.h"
#include "conjuntoletras.h"

using namespace std;



int main(int argc, char const *argv[]) {

  char anagrama[13];
  cin>>anagrama;
  int len = strlen(anagrama);
  sort(anagrama, anagrama+len);
  do {
  cout << anagrama << endl;
  } while (next_permutation(anagrama, anagrama+len));
  return 0;


  if(argc != 5){
    cout<<"Ejecución: letras diccionario1.txt salida.txt numerodeLetras8 modalidad(L o P)"<<endl;
       return 0;
  }

  ifstream fdiccionario (argv[1]);
  if (!f1){
   cout<<"No puedo abrir el fichero  "<<argv[1]<<endl;
   return 0;
  }

  ifstream fsalidatxt (argv[2]);
  if (!f2){
   cout<<"No puedo abrir el fichero "<<argv[2]<<endl;
   return 0;
  }

  Diccionario midiccionario;
  fdiccionario >> midiccionario;
  //El operador de entrada del conjunto deberia de leer salidatxt
  // que tiene un formato diferente a letras.txt
  //OPCION B usar el operador de entrada de bolsa de letras y leer
  // de ahi salidatxt
  //fsalidatxt >> conjunto;
  Conjuntoletras con;
  Bolsaletras mibolsa;
  Bolsaletras bolsa2(5,con);




}