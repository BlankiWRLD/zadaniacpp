// 4. Napisz program, który wczytuje 3 liczby i mówi, która jest większa. 
#include <iostream>
using namespace std;

int main () {
    int a,b,c;
    cout<<"Podaj 3 liczby \n";
    cin>>a>>b>>c;
    if (a!=b && b!=c && a!=c){
    if (a>b && a>c) {
        cout<<"Liczba "<<a<<" jest wieksza od "<<b<<" i "<<c;
    } else if (b>a && b>c) {
        cout<<"Liczba "<<b<<" jest wieksza od "<<a<<" i "<<c;
    } else cout<<"Liczba "<<c<<" jest wieksza od "<<a<<" i "<<b;
    } else cout<<"2 lub wiecej z podanych liczb sa takie same";

    return 0;
}//zrobione