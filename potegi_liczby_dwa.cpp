// 6. Napisz program wyświetlający potęgi liczby 2 (1,2,4,8,16 ..).

#include <iostream>
using namespace std;
 
int main() {
    int a,potega=2;
    cout<<"Podaj n: ";
    cin >>a;
 
    for(int i=1; i<=a; i++)
    {
        cout<<potega<< " ";
        potega*=2;
    }
 
    return 0;
}
//zrobione