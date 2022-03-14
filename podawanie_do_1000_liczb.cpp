/* 25. Napisz program, który pozwala wprowadzać liczby do momentu przekroczenia sumy 1000 i
wyprowadza średnią tych liczb. */
#include <iostream>

using namespace std;

int main() {
    int liczba=0, suma=0, ilosc=0, srednia;
    cout<<"Podaj liczbe ";
    do{
        cin>>liczba;
        ilosc++;
        suma+=liczba;
    } while (suma<1000);
   
    srednia=suma/ilosc;
    cout<<"Suma liczb  wynosi: "<<suma<<endl;
    cout<<"Ilosc liczb wynosi: "<<ilosc<<endl;
    cout<<"Srednia liczb wynosi: "<<srednia;
    return 0;
}
//zrobione