#include <iostream>

using namespace std;

int main() 
{
    int nilai;
    cout << "Masukkan nilai";
    cin >> nilai;

    if (nilai >= 85) {
        cout << "A";
    } else if (nilai >= 70, nilai < 85) {
        cout << "B";
    } else if (nilai >= 60, nilai < 70) {
        cout << "C";
    } else {
        cout << "D";
    }

    return 0;
}