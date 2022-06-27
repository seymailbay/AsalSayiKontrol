#include <iostream>
using namespace std;
main(){           // asal kontrol bölünüp bölünmediðini kontrol ediyor
	int sayi,asal_kontrol, i;
	cout << " bir sayi giriniz: ";
	cin >> sayi;
	asal_kontrol = 0;
for (i = 2 ; i <= sayi /2; i ++ ) {
	if(sayi % i == 0) {
	        asal_kontrol = 1;
			cout << " sayiniz asal degil";
			break;
	}
}
if (asal_kontrol == 0) {
		cout << "asaldir";
	}
}
