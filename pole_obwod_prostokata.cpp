// 2. Napisz program, który wczytuje dwie liczby całkowite i oblicza pole prostokąta oraz jego obwód.
#include <iostream>
using namespace std;

int main () {
    int a,b;
    cout<<"Podaj dwa boki prostokata: \n";
    cin>>a>>b;
    cout<<"Pole prostokata wynosi "<<a*b<<endl;
    cout<<"Obwod prostokata wynosi "<<2*(a+b);

    return 0;
}
//zrobione