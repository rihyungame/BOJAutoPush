#include <iostream>
#include <vector>

int main()
{
	int pplNum, prize, total = 0;
	std::vector<int> ppl;

	std::cin >> pplNum >> prize;

	ppl.resize(pplNum);

	for (int i = 0; i < pplNum; i++)
	{
		int correctNum;
		std::cin >> correctNum;

		ppl.at(i) = correctNum;
		total += correctNum;
	}

	for (int i = 0; i < pplNum; i++)
	{
		std::cout << prize / total * ppl.at(i) << std::endl;
	}

	return 0;
}