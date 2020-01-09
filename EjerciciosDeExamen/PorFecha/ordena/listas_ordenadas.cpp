#include <iostream>
#include <list>
#include <algorithm>    // std::find
using namespace std;

// template<class T>
list<list<int> > listas_ordenadas(list<int> & l){
    list<list<int> > sublistas;
    list<int> sublista;
    l.sort();
    list<int>::iterator it1 = l.begin();
    int valoractual = *it1;
    while(it1 != l.end()){

      if(*it1 == valoractual){
        //insertamos en sublista
        sublista.push_back(*it1);
        valoractual = *it1;
        ++it1;
      }else{

        ++it1;
        valoractual=*it1;

      }
      sublistas.push_back(sublista);
      sublista.clear();
   }

 return sublistas;

}


int main(int argc, char const *argv[]) {

  list<int> milista;
  list<list<int> > sublistas;

  int k = 3;

  milista.push_back(4);
  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(1);
  milista.push_back(4);



  sublistas = listas_ordenadas(milista);


//   while(!milista.empty()){ // recorrido lista
//   cout << milista.front() <<endl;
//   milista.pop_front();
// }
while (!sublistas.empty()) {
  while (!sublistas.front().empty()) {
    cout << sublistas.front().front() <<endl;
    sublistas.front().pop_front();
  }
  sublistas.pop_front();
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
