#include <iostream>
#include <set>
#include <vector>
#include <fstream>
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


vector<string> Diccionario::PalabrasLongitud(int longitud)
{
  Diccionario::iterator it;
  vector<string> res;

    for (it=begin();it!=end();++it)
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

istream &operator >>(istream &is, Diccionario &D){
string palabra;
while(!is.eof()){
  is>>palabra;
  D.insertar(palabra);

}

return is;

}


ostream & operator<<(ostream & os,Diccionario	&D){

Diccionario::iterator it;

for(it = D.begin(); it != D.end(); ++it){
    os << *it << endl;
}

return os;

}

int Diccionario::FrecLetra(const char & letra){

set<string>:: iterator it;
int frec = 0;

for (it =datos.begin();it!=datos.end();it++)
{
  // Me aseguro de que la letra aparezca aunque sea solo una vez
  if((*it).find(letra)!=string::npos){

    for(unsigned int j = 0;j<(*it).size();j++){
      if((*it)[j]==letra){
        frec++;
      }
    }
  }

}

return frec;


}


 // Funcion para saber si está la palabra en el diccionario
bool Diccionario::Esta(string palabra){

  if(datos.find(palabra)!= datos.end()){
    return true;
  }
  else{
    return false;
  }
}

//frecuencia cada 3 letras

// int main(int argc, char const *argv[]) {
//
//   Diccionario midiccionario;
//   midiccionario.insertar("patata");
//   midiccionario.insertar("hola");
//   cout << midiccionario.size() << endl;
//
//   vector<string> midic;
//
//   midic = midiccionario.PalabrasLongitud(6);
//
//   for (int i = 0; i < midic.size(); i++) {
//     cout << midic[i] << endl;
//   }
//
//   ifstream f1 (argv[1]);
//   if (!f1){
//    cout<<"No puedo abrir el fichero "<<argv[1]<<endl;
//    return 0;
//   }
//
//   f1 >> midiccionario;
//
//
//   cout << "Elementos de diccionario: " << midiccionario.size() << endl;
//
//   cout << "MIDICCIONARIO: "<< endl<< midiccionario << endl;
//
//   if(midiccionario.Esta("nueces")){
//     cout << "Esta la palabra nueces " << endl;
//   }
//   else{
//     cout << "No está la palabra nueces " << endl;
//   }
//
//
//   if(midiccionario.Esta("subrepticiamente")){
//     cout << "Esta la palabra subrepticiamente " << endl;
//   }
//   else{
//     cout << "No está la palabra subrepticiamente " << endl;
//   }
//
//
// cout << midiccionario.FrecLetra('x');
//
// }
//
//

