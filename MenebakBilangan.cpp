#include <iostream>
using namespace std;
int main()
{
    int bilangan;
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    if (bilangan < 0) {
        cout << "Bilangan adalah negatif" << bilangan << endl;
    } else if (bilangan > 0) {
        cout << "bilangan adalah positif" << bilangan << endl;
    } else {
        cout << "Bilangan adalah nol" << endl;
    }
    return 0;
}