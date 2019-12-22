#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "conjuntoletras.h"
//#include "bolsadeletras.h"


using namespace std;





int main(int argc, char const *argv[]) {

  if(argc < 4){
    cout<<"Ejecución: cantidadletras diccionario.txt letras.txt salida.txt"<<endl;
       return 0;
  }

  // ifstream f1 (argv[1]);
  // if (!f1){
  //  cout<<"No puedo abrir el fichero  "<<argv[1]<<endl;
  //  return 0;
  // }

  ifstream f2 (argv[2]);
  if (!f2){
   cout<<"No puedo abrir el fichero "<<argv[2]<<endl;
   return 0;
  }


Conjuntoletras con();
  if (argc==4)
  {

      f2 >> con;


  }








}
