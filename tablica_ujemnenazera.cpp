/* 16. Napisać program, który wczytuje do tablicy 30 elementów z przedziału <-100,100>. Liczby ujemne
należy zastąpić zerami. Tak otrzymaną tablicę liczb drukujemy na ekranie. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int tab[30];
    srand(time(NULL));
    for (int i=0; i<30; i++){
        tab[i]=rand()%200-100;
        cout<<tab[i]<<" ";
    }
    cout<<"\n";
    for (int i=0; i<30; i++){
        if(tab[i]<0) {
            cout<<"0 ";
        } else cout<<tab[i]<<" ";
    }

    return 0;
}
//zrobione