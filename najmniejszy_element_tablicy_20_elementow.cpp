/* 13. Napisz program, który wczytuje do tablicy 20 elementów losowych dwucyfrowych. Następnie
szuka elementu najmniejszego tablicy oraz miejsca (indeksu), na którym ten element się znajduje
oraz wypisuje je na ekranie.  */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    int tab[20], min=100, index=-1;
    srand(time(NULL));
    for (int i=0; i<20; i++) {
        tab[i]=rand()%90+10;  
        cout<<tab[i]<<" ";
    }
    for (int i=0; i<20; i++){
        if (tab[i]<min){
            min=tab[i];
        }
    }
    for (int i=0; i<20; i++) {
        if(min == tab[i]){
            index++;
            break;
        } else index++;
        }
    
cout<<"\nNajmniejsza liczba w tablicy to: "<<min<<" a jej indeks to: "<<index;
    return 0;
}
//zrobione