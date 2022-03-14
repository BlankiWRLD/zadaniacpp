/* 31. Program sprawdza czy punkty są współliniowe. */
#include <iostream>
 
using namespace std;
 
int main() {
    int ile_testow;
    int wspolrzednex[3];
    int wspolrzedney[3];
    cin>>ile_testow;
    for(int i=1;i<=ile_testow;i++)      //pętla do ilości testów
    {
        for(int j=1;j<=3;j++)           //wprowadzanie współrzędnych
        {
            cin>>wspolrzednex[j-1];
            cin>>wspolrzedney[j-1];
        }
        if((wspolrzednex[0]==wspolrzednex[1] && wspolrzednex[1] ==wspolrzednex[2])||(wspolrzedney[0]==wspolrzedney[1] && wspolrzedney[1] ==wspolrzedney[2]))
        {
            cout<<"TAK"<<endl;      //jeżeli któreś 3 współrzędne są takie same to punkty są współliniowe
        } else{        //jeżeli nie ma takich samych współrzędnych to program sprawdza za pomocą równania kierunkowego prostej
            double a;
            a=(wspolrzedney[0]-wspolrzedney[1])/(wspolrzednex[0]-wspolrzednex[1]);  //wspolczynnik kierunkowy
            double b;
            b=wspolrzedney[0]-a*wspolrzednex[0];            //drugi wspolczynnik
            if(wspolrzedney[2]==a*wspolrzednex[2]+b)        //sprawdza czy rownanie prostej sie zgadza
                {cout<<"TAK"<<endl;
            } else
                {cout<<"NIE"<<endl;}
        }
    }
    return 0;
}