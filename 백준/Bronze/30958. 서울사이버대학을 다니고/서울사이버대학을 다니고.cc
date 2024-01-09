#include <iostream>
#include <map>
#include <string>
#include <climits>

int main()
{
	std::map<char, int> alpha;

	alpha.insert(std::make_pair('a', 0));
	alpha.insert(std::make_pair('b', 0));
	alpha.insert(std::make_pair('c', 0));
	alpha.insert(std::make_pair('d', 0));
	alpha.insert(std::make_pair('e', 0));
	alpha.insert(std::make_pair('f', 0));
	alpha.insert(std::make_pair('g', 0));
	alpha.insert(std::make_pair('h', 0));
	alpha.insert(std::make_pair('i', 0));
	alpha.insert(std::make_pair('j', 0));
	alpha.insert(std::make_pair('k', 0));
	alpha.insert(std::make_pair('l', 0));
	alpha.insert(std::make_pair('m', 0));
	alpha.insert(std::make_pair('n', 0));
	alpha.insert(std::make_pair('o', 0));
	alpha.insert(std::make_pair('p', 0));
	alpha.insert(std::make_pair('q', 0));
	alpha.insert(std::make_pair('r', 0));
	alpha.insert(std::make_pair('s', 0));
	alpha.insert(std::make_pair('t', 0));
	alpha.insert(std::make_pair('u', 0));
	alpha.insert(std::make_pair('v', 0));
	alpha.insert(std::make_pair('w', 0));
	alpha.insert(std::make_pair('x', 0));
	alpha.insert(std::make_pair('y', 0));
	alpha.insert(std::make_pair('z', 0));

	std::string s, temp;
	int max = INT_MIN;

	int n;
	std::cin >> n;
	std::cin.ignore();

	while (std::getline(std::cin,temp))
	{
		if (temp.empty())
		{
			break;
		}

		s += temp;
	}

	for (std::string::size_type i = 0; i < s.size(); ++i)
	{
		if (alpha.find(s[i]) == alpha.end())
		{
			continue;
		}

		alpha[s[i]]++;

		if (alpha[s[i]] > max)
		{
			max = alpha[s[i]];
		}

	}

	std::cout << max;

	return 0;
}