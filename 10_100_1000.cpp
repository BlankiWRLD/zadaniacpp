// 12. Napisz program wyświetlający potęgi liczby 10 (1,10,100,1000 ..) do 1000000.
#include <iostream>
#include <math.h>
using namespace std;    

int main () {
    int potega=10;
    for (int i=0; i<10; i++) {
        if (potega<=1000000) {
            cout<<potega<<" ";
            potega *= 10;
        }
    }

    return 0;
}
//zrobione