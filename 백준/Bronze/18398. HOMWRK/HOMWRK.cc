#include <iostream>

int main()
{
	int T, N, A, B;
	std::cin >> T;

	while (T--)
	{
		std::cin >> N;
		while (N--)
		{
			std::cin >> A >> B;
			std::cout << A + B << " " << A * B << std::endl;
		}
	}

	return 0;
}