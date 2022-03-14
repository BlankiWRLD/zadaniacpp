/* 20. Wypełnij tablice 3 losowymi wartościami z przedziału < 10,30 ). Oblicz średnią
 dla liczb podzielnych przez trzy, rozpatrz przypadek, gdy takich liczb nie ma. */
 #include <iostream>
 #include <ctime>
 #include <cstdlib>
 using namespace std;

 int main() {
     int tab[3], wartosc=0, ilosc=0;
     srand(time(NULL));
     for(int i=0; i<3; i++){
         tab[i]=rand()%21+10;
         cout<<tab[i]<<" ";
     }
     for(int i=0; i<3; i++){
         if(tab[i]%3==0){
             wartosc += tab[i];
             ilosc++;
         }
     }
    if(ilosc==0){
        cout<<"Żadne liczby nie spelniaja wymagan";
    } else cout<<"Srednia liczb podzielnych przez 3 wynosi: "<<wartosc/ilosc;
    
     return 0;
 }
 //zrobione