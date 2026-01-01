#include <iostream>
#include <string>
using namespace std;
int main(){
	string judul, penulis, penerbit;
	int tahun;
	cout << "\nMasukkan Informasi Buku" << endl;
	cout << "Judul: ";
	getline(cin, judul);
	cout << "Penulis: ";
	getline(cin, penulis);
	cout << "Penerbit: ";
	getline(cin, penerbit);
	cout << "Tahun Terbit: ";
	cin >> tahun;

	cout << "\nInformasi Buku" << endl;
	cout << "Judul: " << judul << endl;
	cout << "Penulis: " << penulis << endl;
	cout << "Penerbit: " << penerbit << endl;
	cout << "Tahun Terbit: " << tahun << endl;

return 0;
}
