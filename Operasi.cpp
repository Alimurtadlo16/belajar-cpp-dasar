#include <iostream>

using namespace std;

int jumlah(int a, int b)
 {
    return a + b;
}

int main()
{
    //int hasil = jumlah(10,5);
    cout << "Hasil penjumlahan: " << jumlah(10,5) << endl;
    cout << "Hasil penjumlahan: " << jumlah(1000,500) << endl;
    return 0;
}