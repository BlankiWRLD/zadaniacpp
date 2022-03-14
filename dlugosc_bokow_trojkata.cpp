/* 8. Napisz program odczytujący 3 niezerowe wartości zmiennoprzecinkowe (float) oraz określający i
wyświetlający informację, czy mogą one stanowić długość boków trójkąta. */
#include <iostream>
#include <cmath>

using namespace std;
int main () {
    float a, b, c;
    cout<<"Podaj 3 liczby ";
    cin>>a>>b>>c;
    if (a == 0 || b == 0 || c == 0) {
        cout<<"Podales zerowa liczbe, podaj liczby jeszcze raz ";
        cin>>a>>b>>c;
    }
    
    if (a>b && a>c) { 
        if(a<=b+c){
            cout<<"Boki "<<a<<", "<<b<<" oraz "<<c<<" moga stanowic boki trojkata";
        } else cout <<"Boki "<<a<<", "<<b<<" oraz "<<c<<" nie moga stanowic bokow trojkata";
    }else if (b>a && b>c) {
        if(b<=a+c){
             cout<<"Boki "<<a<<", "<<b<<" oraz "<<c<<" moga stanowic boki trojkata";
        }  else cout <<"Boki "<<a<<", "<<b<<" oraz "<<c<<" nie moga stanowic bokow trojkata";
    } else if(c<=a+b){
         cout<<"Boki "<<a<<", "<<b<<" oraz "<<c<<" moga stanowic boki trojkata";
    } else cout <<"Boki "<<a<<", "<<b<<" oraz "<<c<<" nie moga stanowic bokow trojkata";

    return 0;    
}
//zrobione