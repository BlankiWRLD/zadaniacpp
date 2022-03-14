/* 29. Program sprawdza czy liczba jest liczba armstronga. */
#include <iostream>
#include <cmath>

int suma_poteg( int liczba, int a )
{
    int suma = 0;
    while( liczba > 0 )
    {
        suma += pow( liczba % 10, a ) + 0.1;
        liczba = liczba / 10;
    }
    return suma;
}
using namespace std;

int main() {
    int lc = 0; //liczba cyfr
    int kopia;
    for( int i = 1; i < 1000; i++ ) //sprawdzam, czy i jest szukaną liczbą
    {
        kopia = i;
        while( kopia > 0 )
        {
            kopia = kopia / 10;
            lc++;
        }
        if( suma_poteg( i, lc ) == i )
        {
            cout << i << endl;
        }
        lc=0;
    }
   
    return 0;
}