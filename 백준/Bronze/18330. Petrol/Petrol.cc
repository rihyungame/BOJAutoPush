#include <iostream>

int main() 
{
	int nextPetrol, surplus;
	std::cin >> nextPetrol >> surplus;

	int totalLimit = surplus + 60;

	int total = 0;

	if (totalLimit < nextPetrol)
	{
		total += totalLimit * 1500;
		total += (nextPetrol - totalLimit) * 3000;
	}
	else
	{
		total += nextPetrol * 1500;
	}
	
	std::cout << total;
	return 0;
}