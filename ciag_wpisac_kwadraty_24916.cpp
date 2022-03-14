/* 17. Napisz program wczytujący ciąg liczb rzeczywistych.
Wydrukuj na ekranie te spośród liczb, których indeks jest liczbą będącą kwadratem 
liczby całkowitej(1, 4, 9, 16 itd.). */
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    srand(time(NULL));
    int x;
    int tab[1000];
    cout<<"Podaj liczbe liczb rzeczywistych do wylosowania ";
    cin>>x;
    for(int i=0; i<x; i++){
        tab[i]=rand()%1000+1;
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<x; i++){
        if(i*i>=x)
        break;
        cout<<tab[i*i]<<endl;
    }


    return 0;
}
//zrobione