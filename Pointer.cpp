#include <iostream>
using namespace std;
int main(){
	int a =5;
	int* p = &a;
	*p = 10;
	cout << "a = " << *p << endl;
	return 0;
}
