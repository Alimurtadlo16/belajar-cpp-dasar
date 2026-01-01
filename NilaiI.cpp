#include <iostream>
using namespace std;
int main(){
	int i = 1, total = 5;
	for(int i=1; i<=5; i++ ){
		cout << "Nilai I sekarang: ";
		cin >> i;
	}while(i == total){
		cout << "Total akhir " << endl;
	}
	cout << "Total akhir: " << total << endl;
	return 0;
}
