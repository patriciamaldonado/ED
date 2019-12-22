
#include <iostream>
#include <iterator>
#include <fstream>
#include <clocale>
#include "conjuntoletras.h"
#include <vector>

using namespace std;

Letra::Letra()
{

  letra = 'a';
  puntos = 0;
  repe = 0;
}

Letra::Letra(const char &p)
{

  /*Chequeamos que p está dentro del rango
válido*/
  if (p >= 'a' && p <= 'z')
  {

    letra = p;
    puntos = 0;
    repe = 0;
  }
  else
  {
    /*Si falla el rango anterior debemos
construir una letra válida*/
    letra = 'a';
    puntos = 0;
    repe = 0;
  }
}

Letra::Letra(const char &l, const int &puntos, const int &repeticiones)
{

  if (l >= 'a' && l <= 'z')
  {

    letra = l;
    this->puntos = puntos;
    repe = repeticiones;
  }
  else
  {
    /*Si falla el rango anterior debemos
  construir una letra válida*/
    letra = 'a';
    this->puntos = puntos;
    repe = repeticiones;
  }
}

int Letra::score() const
{

  return puntos;
}

int Letra::repeticiones() const
{

  return repe;
}

void Letra::setletra(const char l)
{

  if (l >= 'a' && l <= 'z')
  {

    letra = l;
  }
  else
  {
    /*Si falla el rango anterior debemos
  construir una letra válida*/
    letra = 'a';
  }
}

char Letra::getletra() const
{
  return letra;
}

bool Letra::operator==(Letra l) const
{

  return letra == l.getletra();
}

Conjuntoletras::Conjuntoletras()
{

  conjunto.clear();
  //limpiamos en el constructor por defecto
}

vector<Letra> Conjuntoletras::getletras() const
{

  vector<Letra> myset;
  myset = conjunto;
  return myset;
}

int Conjuntoletras::scorepalabra(char letra)
{
  int score = 0;
}

void Conjuntoletras::setletra(Letra l)
{

  conjunto.push_back(l);
}

int Conjuntoletras::size() const
{
  return conjunto.size();
}
//Operador necesario para el operador <<
//acceso a un elemento del vector de Letras
Letra Conjuntoletras::operator[](const int x) const
{
  return conjunto[x];
}
ostream &operator<<(ostream &os, Conjuntoletras const &conjunto)
{

  for (int i = 0; i < conjunto.size(); i++)
  {
    os << conjunto[i].getletra() << endl;
  }
  return os;
}

istream & operator>>(istream & is, Conjuntoletras &conjunto){

char letra;

    while(!is.eof()){
        is >> letra;
        Letra l(tolower(letra));
        conjunto.setletra(l);
    }

    return is;
}


// main de prueba de Letra y Conjuntoletras
int main(int argc, char const *argv[])
{
  setlocale(LC_CTYPE,"Spanish");
  Letra a('e');
  cout << a.getletra() << endl;

  Letra b('e');
  if (a == b)
  {
    cout << "Son iguales" << endl;
  }

  Letra c('c');
  Conjuntoletras con;
  con.setletra(a);
  con.setletra(c);
  cout << "salida: " << endl;
  cout << con << endl;



    ifstream f1 (argv[1]);
    if (!f1){
     cout<<"No puedo abrir el fichero "<<argv[1]<<endl;
     return 0;
    }

  // Solucionar problemas locales no lee la ñ
  // Solucionar doble zz al final del fichero
  Conjuntoletras con2;
  f1 >> con2;
  cout << con2 << endl;




}



