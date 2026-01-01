#include <iostream>
using namespace std;
int main(){
	float berat;
	cout << "Masukkan berat barang: ";
	cin >> berat;
	int Reguler, Express;

	if(berat <= 10){
		Reguler = 10000;
		Express = 15000;
	}else{
		Reguler = 20000;
		Express = 30000;
	}

	cout << "Biaya Reguler: " << Reguler << endl;
	cout << "Biaya Express: " << Express << endl;

	char Jenis;
	cout << "r untuk Reguler, e untuk Express: ";
	cin >> Jenis;

	int Biaya;
	if(Jenis == 'r'){
		Biaya = Reguler;
	}else if(Jenis == 'e'){
		Biaya = Express;
	}else{
		cout << "Jenis pengiriman tidak valid. " << endl;
		return 1;
	}

	cout << "Total pembayaran " << berat << " kg. " << Biaya << endl;
	return 0;
}
