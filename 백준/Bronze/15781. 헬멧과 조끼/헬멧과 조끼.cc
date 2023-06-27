#include <iostream>
#include <climits>

int main() {
	int h, j;
	long long int min_h = INT_MIN, min_j = INT_MIN;
	std::cin >> h >> j;

	if (!h)
		min_h = 0;

	if (!j)
		min_j = 0;

	long long int* a_h = new long long int[h];
	long long int* a_j = new long long int[j];

	for (int i = 0; i < h; i++)
		std::cin >> a_h[i];

	for (int i = 0; i < j; i++)
		std::cin >> a_j[i];

	for (int i = 0; i < h; i++) 
		if (a_h[i] > min_h) 
			min_h = a_h[i];		

	for (int i = 0; i < j; i++)
		if (a_j[i] > min_j)
			min_j = a_j[i];

	std::cout << min_h + min_j;

	return 0;
}
