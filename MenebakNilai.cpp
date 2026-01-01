#include <iostream>
using namespace std;
int main() 
{
    int N, jumlah = 0;
    cout << "Masukkan nilai N: ";
    cin >> N;
    if (N < 1) {
        cout << "N harus bilangan positif" << endl;
    }
    for (int i = 1; i <= N; i++) {
        jumlah += i;
    }
    cout << "Jumlah urut dari 1 sampe" << N << "Adalah: " << jumlah << endl;
    return 0;
}