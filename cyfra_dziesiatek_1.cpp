/* 19. Wypełnij tablice 50 losowymi wartościami z przedziału <0,100)
Policz ile jest wśród wylosowanych liczb, których cyfra dziesiątek wynosi 1. */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main () {
    int tab[50], liczba=0;
    srand(time(NULL));
    for(int i=0; i<50; i++){
        tab[i]=rand()%100;
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<50; i++){
        if(tab[i]/10%10==1)
        liczba++;
    }
    cout<<"\nTakich liczb jest "<<liczba;


    return 0;
}
//zrobione