/* 22. Wypełnij tablice 50 losowymi wartościami z przedziału <-20,20)
Oblicz ile liczb jest mniejszych od zera, ile wiekszych od zera, ile razy występuje zero. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int tab[50], zero=0, mniej=0, wiecej=0;
    srand(time(NULL));

    for(int i=0; i<50; i++){
        tab[i]=rand()%40-20;
        cout<<tab[i]<<" ";
    }
    for(int i=0; i<50; i++){
        if(tab[i]<0){
            mniej++;
        } else if (tab[i]>0) {
            wiecej++;
        } else zero++;
    }
    cout<<endl;
    cout<<"Liczb mniejszych od zera jest: "<<mniej<<endl;
    cout<<"Liczb rownych zero jest: "<<zero<<endl;
    cout<<"Liczb wiekszych od zera jest: "<<wiecej<<endl;
    return 0;
}
//zrobione