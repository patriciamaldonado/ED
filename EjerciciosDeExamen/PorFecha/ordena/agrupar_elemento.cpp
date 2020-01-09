#include <iostream>
#include <list>
#include <algorithm>    // std::find
using namespace std;
// Ejercicio 3
// Decir si la primera lista esta  contenida en la segunda
void agrupar_elemento(list<int> & l, int k){
 list<int>::iterator it1;
 list<int>::iterator it2;

 it1 = find(l.begin(),l.end(),k); //buscar la primera aparicion de k en la lista
 it2 = ++it1;
 while(it1 != l.end()){
      if(*it1 == k){
        //habria que poner esto de la siguiete linea?
        // it1 =l.insert(it1,k); // inserta el elemento antes de pos
        l.insert(it1,k); 
        it2 = l.erase(it2); //
      }else{
          ++it2;
      }

  }
}


int main(int argc, char const *argv[]) {

  list<int> milista;
  int k = 1;

  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(1);
  milista.push_back(4);
  milista.push_back(4);



  agrupar_elemento(milista,k);

  while(!milista.empty()){ // recorrido lista
  cout << milista.front() <<endl;
  milista.pop_front();
}


  // int k = 1;
  // milista.clear();
  // milista.push_back(3);
  // milista.push_back(1);
  // milista.push_back(4);
  // milista.push_back(1);
  // milista.push_back(4);
  // milista.push_back(1);
  // milista.push_back(1);
  //
  //
  // cout << agrupar_elemento(milista,k) << endl; /
  //


}
