/* 9. Trójkąt prostokątny może mieć boki, których długości są liczbami całkowitymi. Trójka pitagorejska
musi spełniać jeden warunek: suma kwadratów dwóch przyprostokątnych musi być równa
kwadratowi przeciwprostokątnej. Znajdź wszystkie trójki pitagorejskie dla wartości nie dłuższych niż
500.  */
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a, b, c;
    a=0;
    b=0;
    c=0;
    for(a=1; a<=500; a++)
    for(b=1; b<=500; b++)
    for(c=1; c<=500; c++){
        if ((a*a)+(b*b)==(c*c)){
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
    }
    return 0;
}
//zrobione