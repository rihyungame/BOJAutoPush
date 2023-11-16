#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> winners
		= { "ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "ITMO",
		    "PetrSU, ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO",
		    "ITMO", "ITMO", "SPbSU", "ITMO" };

	int n;
	std::cin >> n;

	std::cout << winners[n - 1995];

	return 0;
}