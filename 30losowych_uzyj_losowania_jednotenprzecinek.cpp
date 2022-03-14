/* 23. Wypełnij tablice 30 losowymi wartościami z przedziału < -10.00 , 10.00 )
Oblicz ile wylosowano liczb całkowitych. Użyj losowania aby uzyskać wartości z jednym miejscem po
przecinku (rand()%100-10.00)/10.00    if(x-int(x) == 0)*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    float tab[30], calkowite=0;
    srand(time(NULL));
    for(int i=0; i<30; i++){
        tab[i]=(rand()%100-10.00)/10.00;
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<30; i++){
        if(tab[i] - int(tab[i])==0){
            calkowite++;
        }
    }
    cout<<"\nLiczb calkowitych jest: "<<calkowite;

    return 0;
}
//zrobione