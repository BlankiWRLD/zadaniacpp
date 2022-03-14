/* 15. Napisz program wczytujący ciąg liczb całkowitych. Wydrukuj
na ekranie kolejno wszystkie liczby, których suma cyfr wynosi 1.  */
#include <iostream>
using namespace std;

int main() {
    int tab[10];
    cout<<"Podaj 10 liczb calkowitych: ";
    for(int i=0; i<10; i++){
        cin>>tab[i];
    }
    for(int i=0; i<10; i++){
        int suma=0; 
        int x=tab[i];
        while(x>0){
            suma += x%10;
            x/=10;
        }
        if (suma == 1) {
            cout<<tab[i]<<" ";
            suma = 0;
        }
    }

    return 0;
}
//zrobione