#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int count, w, h, d;
	cin >> count >> w >> h;
	d = sqrt(pow(w,2) + pow(h,2));
	for (int i = 0; i < count; i++) {
		int l;
		cin >> l;
		if (l <= w || l <= h || l <= d)
			cout << "DA";
		else
			cout << "NE";
		cout << endl;
	}
	return 0;
}
