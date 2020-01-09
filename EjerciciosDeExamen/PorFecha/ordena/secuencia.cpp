#include <iostream>
#include <list>
using namespace std;
// Ejercicio 3
// Decir si la primera lista esta  contenida en la segunda
bool secuencia(list<int> & l1, list<int> & l2){
 list<int>::iterator it1 = l1.begin();
 list<int>::iterator it2 = l2.begin();


while(it2 != l2.end()) {
  while(*it1 == *it2 && it1 != l1.end() && it2 != l2.end()){
    ++it1;
    ++it2;
  }

  if(it1 == l1.end()){
    return 1;
  }else{
    return 0;
  }

}

}

int main(int argc, char const *argv[]) {

  list<int> milista;
  list<int> milista2;
  list<int> milista3;
  bool sec;

  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);

  milista2.push_back(1);
  milista2.push_back(2);
  milista2.push_back(4);
  milista2.push_back(4);
  milista2.push_back(1);
  milista2.push_back(2);
  milista2.push_back(3);


  sec =secuencia(milista,milista2);
  cout << sec << endl; //ascendente





}
