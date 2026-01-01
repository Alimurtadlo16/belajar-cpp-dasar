#include <iostream>
using namespace std;
bool kabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0)) {
        return true;
    }
    return false;
}
int main()
{
    int tahun;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if (tahun < 0) {
        cout << "Tahun tidak valid" << endl;
    }
    if (kabisat(tahun)) {
        cout << tahun << "Adalah tahun kabisat" << endl;
    } else {
        cout << tahun << "Bukan tahun kabisat" <<endl;
    }
    return 0;
}