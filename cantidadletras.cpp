#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "conjuntoletras.h"
#include "diccionario.h"
//#include "bolsadeletras.h"


using namespace std;
// ESTO HAY QUE HACERLO CON UN PATRON POR TROZOS COMO DIJO VALDIVIA
float calculaPuntos(int frecletra, int letrasTotales){
  float  puntos =  (1.0/(frecletra*1.0/letrasTotales*1.0));
  return puntos;

}

int main(int argc, char const *argv[]) {

  if(argc != 4){
    cout<<"Ejecución: cantidadletras diccionario.txt letras.txt salida.txt"<<endl;
       return 0;
  }

  ifstream f1 (argv[1]);
  if (!f1){
   cout<<"No puedo abrir el fichero  "<<argv[1]<<endl;
   return 0;
  }

  ifstream f2 (argv[2]);
  if (!f2){
   cout<<"No puedo abrir el fichero "<<argv[2]<<endl;
   return 0;
  }

  ofstream fsalida(argv[3]);

  Conjuntoletras con;
  Diccionario midic;


  f1 >> midic;
  cout << midic;
  f2 >> con;
  cout << con;

  int frecletraActual = 0;
  int numtotalLetras = 0;

for (int i = 0; i < con.size(); i++) {
  frecletraActual = midic.FrecLetra(con[i].getletra());
  numtotalLetras+= frecletraActual;
}
cout <<  "Numero total de letras " << numtotalLetras <<endl;
for (int i = 0; i < con.size(); i++) {
    frecletraActual = midic.FrecLetra(con[i].getletra());
    //cout << frecletraActual << "La letra es "<< con[i].getletra() << endl;

    cout << "La letra: "<< con[i].getletra() << " se repite " << frecletraActual << " tiene estos puntos: " << calculaPuntos(frecletraActual,numtotalLetras) <<endl;
}

for (int i = 0; i < con.size(); i++) {

    frecletraActual = midic.FrecLetra(con[i].getletra());
    fsalida << con[i].getletra() << " " << frecletraActual << " " << calculaPuntos(frecletraActual,numtotalLetras) <<endl;

}


}
