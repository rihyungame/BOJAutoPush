#include <iostream>

int main() {
	
	int x[3], y[3];
	int flag = 0;
	int answer_x, answer_y;

	for (int i = 0; i < 3; i++)
		std::cin >> x[i] >> y[i];

	if (x[0] == x[1])
		flag = 1;
	else if (x[0] == x[2])
		flag = 2;

	if (flag == 1)
		answer_x = x[2];
	else if (flag == 2)
		answer_x = x[1];
	else
		answer_x = x[0];

	flag = 0;

	if (y[0] == y[1])
		flag = 1;
	else if (y[0] == y[2])
		flag = 2;

	if (flag == 1)
		answer_y = y[2];
	else if (flag == 2)
		answer_y = y[1];
	else
		answer_y = y[0];

	std::cout << answer_x << " " << answer_y;


	return 0;
}
