#include <iostream>

using namespace std;

int czy_pierwsza(int a){
	bool test=1;
	for(int i=2; i<a; i++){
		if(a%i==0)test=0;
	}
	return test;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Czy pierwsza" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0 && wyjscie!= 1);

    if(wyjscie==1){
	cout << "liczba " << a;
	if(czy_pierwsza(a)==1)cout<<" jest pierwsza"<<endl;
	else cout << " nie jest pierwsza"<< endl;
    }

    return 0;
}
