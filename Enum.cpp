#include <iostream>
using namespace std;
enum weather {Sunny = 1, Cloudy, Rainy};
int main(){
	weather today = Rainy;
	cout << "Today's weather code is: " << today;
	return 0;
}
