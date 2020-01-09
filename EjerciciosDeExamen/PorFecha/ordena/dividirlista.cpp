#include <iostream>
#include <list>
#include <algorithm>    // std::find
using namespace std;

// template<class T>
void dividir_lista(list<int> & l, int k){
 list<int>::iterator it1 = l.begin();

 while(it1 != l.end()){
      if(*it1 < k){
          ++it1;
      }else{
          l.push_back(*it1);
          // !!!!!!!! IMPORTANTE ASIGNAR ITERADOR CUANDO HACEMOS ERASE
          it1 = l.erase(it1); // la nueva posición del iterador tras el erase en it1
          ++it1;
      }
  }
}


int main(int argc, char const *argv[]) {

  list<int> milista;
  int k = 3;

  milista.push_back(4);
  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(1);
  milista.push_back(4);




  dividir_lista(milista,k);

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
