#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int score[] = { 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
	int panalty[] = { 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773 };

	int n;
	std::cin >> n;

	std::cout << score[n - 1] << " " << panalty[n - 1];

	return 0;
}