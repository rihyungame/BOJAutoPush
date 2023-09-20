#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;
		
		if (s == "Algorithm")
			std::cout << 204;
		else if (s == "Network")
			std::cout << 303;
		else if (s == "CyberSecurity")
			std::cout << "B101";
		else if (s == "Startup")
			std::cout << 501;	
		else if (s == "DataAnalysis")
			std::cout << 207;
		else if (s == "ArtificialIntelligence")
			std::cout << 302;
		else if (s == "TestStrategy")
			std::cout << 105;

		std::cout << std::endl;
	}

	return 0;
}