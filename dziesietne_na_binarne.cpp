/* 30. Sprawdź ilość jedynek w zapisie binarnym po podaniu liczby dziesiętnej. */
#include <iostream>
using namespace std;

void dec_to_bin(int liczba){
	int i=31;
	bool ok=false;
	while(i--){
		//warunek, który pozwoli ominąć początkowe zera
		if(liczba>>i&1&!ok) 
			ok=true;
		if(ok)
			cout<<((liczba>>i)&1);
	}
}
int main(){
	int liczba;
	cout<<"Podaj liczbe: ";
	cin>>liczba;

	cout<<liczba<<" po zamianie na postac binarna: ";
	dec_to_bin(liczba);
	cout<<endl;

	return 0;
}
//zrobione ale dziwny sposob