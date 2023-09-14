#include <iostream>

int main() 
{
	int a, b;
	std::cin >> a >> b;

	long long answer = (a + b) * (a - b);

	std::cout << answer;
	return 0;
}