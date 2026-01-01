#include <iostream>
using namespace std;
int main(){
	int nilai;
	cout << "Masukkan nilai anda: ";
	cin >> nilai;

	if (nilai > 90){
	cout << "A";
	} else if (nilai > 70){
	cout << "B";
	} else if (nilai > 55){
	cout << "C";
	} else {
	cout << "D";
	}
	return 0;
}
