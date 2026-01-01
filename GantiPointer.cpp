#include <iostream>
using namespace std;

void tukar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> x;
    cout << "Masukkan bilangan kedua: ";
    cin >> y;
    
    cout << "\nSebelum ditukar:" << endl;
    cout << "Bilangan pertama = " << x << endl;
    cout << "Bilangan kedua = " << y << endl;
    
    tukar(&x, &y);
    
    cout << "\nSetelah ditukar:" << endl;
    cout << "Bilangan pertama = " << x << endl;
    cout << "Bilangan kedua = " << y << endl;
    
    return 0;
}
