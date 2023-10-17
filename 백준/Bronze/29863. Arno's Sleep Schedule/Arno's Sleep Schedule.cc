#include <iostream>

int main()
{
	int time_now, wake_time;
	int total = 0;
	std::cin >> time_now >> wake_time;

	if (time_now >= 20 && time_now <= 23)
		total = 24 - time_now + wake_time;
	else if (time_now >= 0 && time_now <= 3)
		total = wake_time - time_now;

	std::cout << total;

	return 0;
}