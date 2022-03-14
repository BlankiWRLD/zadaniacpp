// 3. Napisz program, który odczytuje 2 liczby i określa czy pierwsza jest wielokrotnością drugiej.
#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout<<"Podaj dwie liczby: \n";
    cin>>a>>b;
    if (a%b == 0) {
        cout<<"Liczba "<<a<<" jest wielokrotnoscia "<<b;
    } else cout<<"Liczba "<<a<<" nie jest wielokrotnoscia "<<b;

    return 0;
}
//zrobione