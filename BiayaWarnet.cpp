#include <iostream>
using namespace std;
int main(){
	char member;
	int jam;
	int hargaPerjam;
	double total;

	cout << "y untuk Member, t untuk selain Member: ";
	cin >> member;
	cout << "Berapa jam anda menggunakan warnet: ";
	cin >> jam;

	if(member =='y' ||member == 'y'){
		hargaPerjam = 2500;
	}else{
		hargaPerjam = 3000;
	}
	total = hargaPerjam * jam;

	if(total > 25000){
		total = total - 0.10;
	}

	cout << "Total pembayaran: " << total << endl;
	return 0;
}
