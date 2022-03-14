/* 21. Wypełnij tablice 50 losowymi wartościami z przedziału <0,100). Oblicz średnią dla liczb
nieparzystych. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int tab[50], suma=0, ilosc=0, srednia;
    srand(time(NULL));
    for (int i=0; i<50; i++){
        tab[i]=rand()%100;
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<50; i++){
        if(tab[i]%2 != 0) {
            suma += tab[i];
            ilosc++;
            cout<<tab[i]<<" ";
        }
    }
    srednia=suma/ilosc;
    cout<<endl<<"Suma liczb nieparzystych wynosi: "<<suma<<endl;
    cout<<"Ilosc liczb nieparzystych wynosi: "<<ilosc<<endl;
    cout<<"Srednia liczb nieparzystych wynosi: "<<srednia;
    return 0;
}
//zrobione