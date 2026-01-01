#include <iostream>
using namespace std;

enum Level { TidakPedas = 0, Sedang, Pedas, PedasBanget };

int main(void) {
    int level;
    cout << "Masukkan level selera lu: ";
    cin >> level;

    if (level == TidakPedas) {
        cout << "Level lu: Tidak Pedas" << endl;
    } else if (level == Sedang) {
        cout << "Level lu: Sedang" << endl;
    } else if (level == Pedas) {
        cout << "Level lu: Pedas" << endl;
    } else if (level == PedasBanget) {
        cout << "Siap buat kebakar? Level lu: Pedas Banget" << endl;
    } else {
        cout << "Level tidak valid!" << endl;
    }

    cout << "Posisi lu sekarang: " << level << endl;
    return 0;
}
