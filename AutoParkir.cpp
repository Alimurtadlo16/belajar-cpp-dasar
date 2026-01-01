#include <iostream>
using namespace std;
int main(){
	int parkir_perjam = 5000;
	parkir_perjam +=2000;
	parkir_perjam *=2;
	int maksimal = 20000;

	cout << "Masukkan jam parkir anda: ";
	cin >> parkir_perjam;
	maksimal = (parkir_perjam = 5000) += 2000 * (parkir_perjam *= 2);
	cout << "Total biaya parkir anda: " << maksimal << "Rp" << endl;
	return 0;
}
