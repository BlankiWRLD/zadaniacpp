/* 24. Zapełnij tablicę dwuwymiarową 20x10 cyframi 0-9 Wypisz tablice na ekranie.
Policz, który wiersz posiada największą sumę cyfr(podaj numer wiersza i kolumny) */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(NULL));
    int tab[20][10], suma = 0, suma2 = 0, w = 0, suma3 = 0;
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            tab[i][j] = rand() % 10;
            suma += tab[i][j];
            cout << tab[i][j] << " ";
        }
        cout<<", suma liczb: "<<suma<<",wiersz: "<<i<<"\n";
        suma = 0;
    }
    cout << "\n";
    for(int i = 0; i < 1; i++){
        for(int j = 0; j < 10; j++){
            suma2 += tab[i][j];
        }
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            suma += tab[i][j];
        }
        if(suma > suma2){
            w = i;
            suma2 = suma;
        }
        suma = 0;
    }
    cout<<"Największa suma : "<<suma2<<", wiersz: "<<w;
  return 0;
}
//zrobione