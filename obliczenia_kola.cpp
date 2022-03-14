// 7. Napisz program odczytujący promień koła i obliczający oraz wyświetlający średnicę, obwód oraz
// pole. 

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    float promien;
    cout<<"Podaj promien kola ";
    cin>>promien;
    cout<<"Srednica kola wynosi "<<promien*2<<endl;
    cout<<"Obwod kola wynosi "<<2*3.14*promien<<endl;
    cout<<"Pole kola wynosi "<<3.14*pow(promien,2);
    return 0;
}
//zrobione