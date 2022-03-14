/* 10. Napisz program wyświetlający potęgi liczby 3 (1,3,9,27 ..) do 1000. */
#include <iostream>
#include <math.h>
using namespace std;    

int main () {
    int potega=3;

    for(int i=1; i<=100; i++)
    {
        if (potega < 1000) {
        cout<<potega<< " ";
        potega*=3;
        }
    }
    
    return 0;
}
//zrobione