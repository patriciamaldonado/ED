#include <iostream>
#include <list>
using namespace std;
// Ejercicio 3

int orden(list<int> & l){
 list<int>::iterator it1 = l.begin();
 list<int>::iterator it2 = l.begin();
 bool ascendente = true;
 bool descendente = true;

 if(l.empty()){
   cout << "Lista vacía" << endl;
 }else{
   ++it2;// aumentamos el segundo iterador para comparar con el siguiente en la lista
   while((ascendente || descendente) && it2!=l.end()){
       if((*it1) < (*it2)){
         descendente = false;
       }
       else if((*it1) > (*it2)){
          ascendente =false;
       }
    ++it1;
    ++it2;
   }

 }
 if(ascendente){
   return 1;
 } else if(descendente){
   return 2;
 }else{
   return 0;
 }


}

int main(int argc, char const *argv[]) {

  list<int> milista;
list<int> milista2;
list<int> milista3;
  milista.push_back(1);
  milista.push_back(5);


  int ordena;

  ordena =orden(milista);
  cout << ordena << endl; //ascendente

  milista2.push_back(10);
  milista2.push_back(5);

  cout << orden(milista2) << endl; //descendente

  milista3.push_back(10);
  milista3.push_back(5);
milista3.push_back(8);
  cout << orden(milista3) << endl; //desordenda

  // while(!milista.empty()){ // recorrido lista
  //   cout << milista.front() <<endl;
  //   milista.pop_front();
  // }

}
