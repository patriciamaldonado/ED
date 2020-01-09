#include <iostream>
#include <list>
using namespace std;

void reemplaza(list<int> & l,list<int> &seq,list<int> &reemp){
 list<int>::iterator lit;
 list<int>::iterator it_find;
 list<int>::iterator it_seq;
 list<int>::iterator it_reemp;
 lit = l.begin();
  for(lit=l.begin();lit!=l.end();++lit){ // recorremos lista inicial
      it_find=lit;
      it_seq=seq.begin();
      while(it_find != l.end() && it_seq!=seq.end() &&*it_find==*it_seq){
        ++it_find;
        ++it_seq;
      }
      if(it_seq == seq.end()){
        lit = l.erase(lit,it_find); //borras entre el iterador lit y it_find (secuencia igual)
        it_reemp = reemp.begin(); // nos situamso al inicio de la lista reemp
        while(it_reemp != reemp.end()){
        lit = l.insert(lit,*it_reemp);// Insertamos el posicion del iterador lit el valor de reemp
        ++lit;
        ++it_reemp;
        }
      }


  }

}

int main(int argc, char const *argv[]) {

  list<int> milista;
  list<int> seq;
  list<int> reemp;
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
  seq.push_back(4);
  seq.push_back(5);
  seq.push_back(1);
  reemp.push_back(9);
  reemp.push_back(7);
  reemp.push_back(3);
  reemp.push_back(5);
  while(!milista.empty()){ // recorrido lista
    cout << milista.front() <<endl;
    milista.pop_front();
  }
  cout<< "solucion" << endl;
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
  reemplaza(milista,seq,reemp);



  while(!milista.empty()){ // recorrido lista
    cout << milista.front() <<endl;
    milista.pop_front();
  }

}