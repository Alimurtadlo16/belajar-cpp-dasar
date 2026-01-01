#include <iostream>
using namespace std;
int main(){
	float pagi = 0.9, siang = 1.2, malam = 0.5;
	bool a = true, b = false;

	cout << pagi << endl;
	cout << siang << endl;
	cout << malam << endl;
	cout << "Apakah sudah melebihi dua liter? " << (pagi + siang + malam) << endl;
	return 0;
}
