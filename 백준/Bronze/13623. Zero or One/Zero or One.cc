#include <iostream>
#include <vector>
#include <algorithm>

void find_alphabet(int n)
{
	switch (n)
	{
	case 0: 
		std::cout << "A";
		break;
	case 1:
		std::cout << "B";
		break;	
	case 2:
		std::cout << "C";
		break;
	}
}

int main()
{
	std::vector<int> result;

	for (int i = 0; i < 3; i++) 
	{
		int n;
		std::cin >> n;
		result.push_back(n);
	}

	int count_zero = std::count(result.begin(), result.end(), 0);
	int count_one = std::count(result.begin(), result.end(), 1);

	if (count_zero == 2)
	{
		int index = std::find(result.begin(), result.end(), 1) - result.begin();
		find_alphabet(index);
	}
	else if (count_one == 2)
	{
		int index = std::find(result.begin(), result.end(), 0) - result.begin();
		find_alphabet(index);
	}
	else
	{
		std::cout << "*";
	}

	return 0;
}