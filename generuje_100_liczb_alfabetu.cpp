/* 33. Napisz program, który wygeneruje 100 małych liter alfabetu i zapisze wyniki 
w tablicy char litery[100]. Program ma za zadanie wyznaczyć liczbę samogłosek 
w tablicy litery.(wykorzystaj tablice ASCII) */
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int x = 0;
    char litery[100];
    char sam[6] = {'a', 'e', 'u', 'o', 'i', 'y'};
    for(int i = 0; i < 100; i++){
        litery[i] = rand() % 26 + 97;
        cout << litery[i] << " ";
    }
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 6; j++){
            if(litery[i] == sam[j])
                x++;
        }
    }
    cout << "\nLiczba samogłosek: " << x;
  return 0;
}
//zrobione