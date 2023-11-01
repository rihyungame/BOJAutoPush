#include <iostream>

int main()
{
	int n, subject;
	std::cin >> n >> subject;

	for (int i = 0; i < subject; i++)
	{
		int score, grade;
		std::cin >> score;
		grade = score * 100 / n;		
		
		if (grade >= 0 && grade <= 4)
			std::cout << "1";
		else if (grade > 4 && grade <= 11)
			std::cout << "2";
		else if (grade > 11 && grade <= 23)
			std::cout << "3";
		else if (grade > 23 && grade <= 40)
			std::cout << "4";
		else if (grade > 40 && grade <= 60)
			std::cout << "5";
		else if (grade > 60 && grade <= 77)
			std::cout << "6";
		else if (grade > 77 && grade <= 89)
			std::cout << "7";
		else if (grade > 89 && grade <= 96)
			std::cout << "8";
		else if (grade > 96 && grade <= 100)
			std::cout << "9";

		std::cout << " ";
	}

	return 0;
}