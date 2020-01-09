#include <iostream>
#include <list>
using namespace std;

void juntalista(list<int> & l,int n){
 list<int>::iterator lit = l.begin();

 int suma;
 int pos_n;

   while(lit != l.end()){
   list<int>::iterator it_inicio = lit;
   suma = 0;
   pos_n = 0;
     while(lit != l.end() && pos_n < n){
      suma += *lit;
      ++lit;
      ++pos_n;
     }
     lit=l.erase(it_inicio,lit);
     lit=l.insert(lit,suma);
     ++lit;
   }


}

int main(int argc, char const *argv[]) {

  list<int> milista;
  int n =3;

  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(4);
  milista.push_back(5);
  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(4);
  milista.push_back(5);
  milista.push_back(7);
  milista.push_back(4);
  milista.push_back(3);

  while(!milista.empty()){ // recorrido lista
    cout << milista.front() <<endl;
    milista.pop_front();
  }
  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(4);
  milista.push_back(5);
  milista.push_back(1);
  milista.push_back(2);
  milista.push_back(3);
  milista.push_back(4);
  milista.push_back(5);
  milista.push_back(7);
  milista.push_back(4);
  milista.push_back(3);
  cout<< "solucion" << endl;

  juntalista(milista,n);



  while(!milista.empty()){ // recorrido lista
    cout << milista.front() <<endl;
    milista.pop_front();
  }

}
