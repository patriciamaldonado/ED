#include <iostream>
#include <stdlib.h> /* srand, rand */
#include <time.h>
#include "bolsadeletras.h"

Bolsaletras::Bolsaletras()
{
    bolsa.clear();
    letrasenjuego.clear();
}

// Bolsaletras::Bolsaletras(Bolsaletras const & otra){

// }

void Bolsaletras::setletraBolsa(const char l)
{
    bolsa.push_back(l);
}
char Bolsaletras::getletraBolsa(const int x) const
{
    if (x < bolsa.size())
    {
        return bolsa[x];
    }
}

void Bolsaletras::letrasAleatorias(const int &numletras)
{
    letrasenjuego.clear();
    srand(time(0));
    for (int i = 0; i < numletras; i++)
    {
        int aleatorio = rand() % bolsa.size();
        char l = tolower(bolsa[aleatorio]);
        letrasenjuego.push_back(l);
    }
}

int Bolsaletras::sizeVectorenJuego(){
    return letrasenjuego.size();
}
char Bolsaletras::getletraEnjuego(const int x) const{
    return letrasenjuego[x];
}

int main(int argc, char const *argv[])
{
    char michar = 'v';
    Bolsaletras mibolsa;
    mibolsa.setletraBolsa(michar);
    cout << mibolsa.getletraBolsa(0) << endl;
    mibolsa.letrasAleatorias(4);
    for (int i = 0; i < mibolsa.sizeVectorenJuego(); i++)
    {
        cout <<  mibolsa.getletraEnjuego(i) << " ";
    }
    cout << endl;
    

    return 0;
}
