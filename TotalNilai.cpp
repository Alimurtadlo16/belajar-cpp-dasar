#include <iostream>
using namespace std;

int main() {
    int nilai[10];        
    int total = 0;        
    float rataRata;       

    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i];  
    }

    rataRata = total / 10;

    cout << "Total nilai: " << total << endl;
    cout << "Rata-rata: " << rataRata << endl;

    return 0;
}