// 11. Napisz program wyświetlający potęgi liczby 4 (1,4,16,64 ..) do liczby podanej przez użytkownika.
#include <iostream>
#include <math.h>
using namespace std;    

int main () {
    long long int a, potega=4;
    cout<<"Podaj liczbe poteg cyfry 4: ";
    cin>>a;
    for (int i=0; i<a; i++){
        cout<<potega<<" ";
        potega *= 4; 
    }
    return 0;
}
//zrobione