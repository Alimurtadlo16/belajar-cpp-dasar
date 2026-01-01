#include <iostream>
using namespace std;
int main(void){
	double panjang = 25.0;
	double lebar = 15.0;
	double luasLapangan = panjang * lebar;
	double luasSetengahLapangan = luasLapangan / 2.0;

	cout << "Luas lapangan bola: " << luasLapangan << " Meter persegi" << endl;
	cout << "Luas setengah lapangan bola: " << luasSetengahLapangan << " Meter persegi" << endl;
	return 0;

}
