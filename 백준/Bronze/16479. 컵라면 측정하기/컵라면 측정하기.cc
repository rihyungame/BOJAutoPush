#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int k, d1, d2;

	cin >> k >> d1 >> d2;
	
	if (d1 == d2)
		cout << k * k;
	else 
		cout << pow((double)k, 2) - pow((double)(d1 - d2) / 2 , 2);
	
	return 0;
}
