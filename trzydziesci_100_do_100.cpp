/* 14. Napisz program, który wczytuje do tablicy 30 elementów losowych z przedziału <-100,100>.
Następnie oblicza iloczyn nieujemnych elementów tablicy podzielnych przez 3.  */
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    long long int tab[30], iloczyn=1;
    srand(time(NULL));
    for (int i=0; i<30; i++) {
        tab[i]=rand()%200-100;
        cout<<tab[i]<<" ";
    
    }
    cout<<endl;
    for(int i=0; i<30; i++) {
       if(tab[i]>0){
            cout<<tab[i]<<" ";   
            cout<<tab[i]/3<<" "<<endl;
            iloczyn *= tab[i]/3;
       } 
    }
    cout<<"Iloczyn liczb nieujemnych podzielonych przez 3 wynosi: "<<iloczyn;
    return 0;
}
//zrobione