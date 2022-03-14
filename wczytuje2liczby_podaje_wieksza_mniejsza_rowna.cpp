// 1. Napisz program, który wczytuje 2 liczby i podaje, która jest większa, mniejsza lub równa
#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout<<"Podaj dwie liczby: \n";
    cin>>a>>b;
    if (a>b) {
        cout<<"Liczba "<<a<<" jest wieksza od "<<b;
    } else if (a<b){
        cout<<"Liczba "<<b<<" jest wieksza od "<<a;
    } else cout<<"Liczby "<<a<<" i "<<b<<" sa rowne";

    return 0;
}
//zrobione

