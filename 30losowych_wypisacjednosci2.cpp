/* 18. Wypełnij tablice 30 losowymi wartościami z przedziału <0,100)
Wypisz te elementy tablicy których cyfra jedności wynosi 2. */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    int tab[30];
    for(int i=0; i<30; i++){
        tab[i]=rand()%100;
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<30; i++){
        if(tab[i]%10==2)
        cout<<tab[i]<<" ";
    }

    return 0;
}
//zrobione