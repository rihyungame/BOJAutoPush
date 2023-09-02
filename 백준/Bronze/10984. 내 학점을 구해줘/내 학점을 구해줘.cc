#include <iostream>

int main()
{
	int count;
	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		int subject, total_grade = 0;
		double total_gpa = 0;
		std::cin >> subject;
		for (int j = 0; j < subject; j++)
		{
			int grade;
			double gpa;
			std::cin >> grade >> gpa;
			total_grade += grade;
			total_gpa += gpa * grade;
		}
		std::cout << std::fixed;
		std::cout.precision(1);
		std::cout << total_grade << " " << total_gpa / total_grade << '\n';
	}

	return 0;
}