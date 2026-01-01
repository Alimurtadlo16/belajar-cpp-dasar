#include <iostream>
using namespace std;
int main() {
    int i=1, total=0;
    for(int i=1; i<=5; i++) {
        cout << "nilai i sekarang: " << i << endl;
        cin >> i; //input nilai pengguna
    } while (i == total) {
        cout << "Total akhir: " << i << endl;
    }
    cout << "Total akhir: " << i << endl;
    return 0;
}