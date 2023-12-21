#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
	std::string beforeS, afterS;
	std::cin >> beforeS;

	std::vector<std::string> words;
	std::stringstream sstream(beforeS);

	while (getline(sstream, afterS, ':'))
	{
		words.push_back(afterS);
	}

	int n1, n2, r, max, min;

	n1 = std::stoi(words[0]);
	n2 = std::stoi(words[1]);

	max = n1 > n2 ? n1 : n2;
	min = n1 > n2 ? n2 : n1;

	while (min != 0)
	{
		r = max % min;
		max = min;
		min = r;
	}	

	std::cout << n1 / max << ':' << n2 / max;
	return 0;
}