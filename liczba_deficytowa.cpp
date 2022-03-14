/* 28. Program sprawdza czy liczba jest liczba deficytową. */
// Liczba deficytowa jest liczbą naturalną, która jest mniejsza od sumy 
// wszystkich swoich naturalnych dzielników właściwych.
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int liczba = 0, dzielniki = 0;
    cin >> liczba;
    for(int i = 1; i < liczba; i++){
        if(liczba % i == 0){
            dzielniki += i;
        }
    }
    if(dzielniki > liczba)
        cout << "Liczba jest deficytowa!";
    else
        cout << "Liczba nie jest deficytowa!";
  return 0;
}
//zrobione