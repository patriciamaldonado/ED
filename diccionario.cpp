#include <iostream>
#include <set>
#include <vector>
#include "diccionario.h"

using namespace std;


/*
Operador corchete, Que se comporte el set como si fuera un vector, porque el set no se comporta así
(por si nos es útil)
*/

// Funciones

Diccionario::Diccionario(){
datos.clear();
}

int Diccionario::size() const{

return datos.size();
}


vector<string> Diccionario::PalabrasLongitud(int logintud)
{
  set<string>::iterador it;
  vector<string> res;

  for (it =datos.begin();it!=datos.end();it++)
  {
     int dist =(*it).length(); //longitud de la palabra
     if( dist == longitud){ // si coincide con la longitud que le pasamos como parámetro

       res.push_back(*it);

     }

  }
  return res;

}


void Diccionario::insertar(const string &palabra){

datos.insert(palabra);

}

// istream &operator >>(istream &is, Diccionario &D){
// string palabra;
// while(is){
//   is>>palabra;
//   D.insertar(palabra);
//
// }
//
// return is;
//
//
// }
//
// int Diccionario::FrecLetra(const char & letra){
//
// set<string>:: iterator it;
// int frec = 0;
//
// for (it =datos.begin();it!=datos.end();it++)
// {
//   // Me aseguro de que la letra aparezca aunque sea solo una vez
//   if((*it).fine(letter)!=string::npos){
//
//     for(unsigned int j = 0;j<(*it).size();j++){
//       if((*it)[j]==letra){
//         frec++;
//       }
//     }
//   }
//
// }
//
// return frec;
//
//
// }
// // Funcion para saber si está la palabra en el diccionario
// bool Diccionario::Esta(string palabra){
//
//   if(datos.find(palabra)!= datos.end()){
//     return true;
//   }
//   else{
//     return false;
//   }
// }

//frecuencia cada 3 letras

int main(int argc, char const *argv[]) {

Diccionario midiccionario;
midiccionario.insertar("patata");
midiccionario.insertar("hola");
cout << midiccionario.size() << endl;

}



