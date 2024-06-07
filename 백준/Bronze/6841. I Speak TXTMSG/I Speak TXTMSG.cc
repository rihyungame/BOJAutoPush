#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string s;
	bool over = false;

	while (true)
	{
		std::cin >> s;

		if (s.find("CU") != std::string::npos)
		{
			s.replace(s.find("CU"), s.length(), "see you");
		}

		if (s.find(":-)") != std::string::npos)
		{
			s.replace(s.find(":-)"), s.length(), "I’m happy");
		}

		if (s.find(":-(") != std::string::npos)
		{
			s.replace(s.find(":-("), s.length(), "I’m unhappy");
		}

		if (s.find(";-)") != std::string::npos)
		{
			s.replace(s.find(";-)"), s.length(), "wink");
		}

		if (s.find(":-P") != std::string::npos)
		{
			s.replace(s.find(":-P"), s.length(), "stick out my tongue");
		}

		if (s.find("(~.~)") != std::string::npos)
		{
			s.replace(s.find("(~.~)"), s.length(), "sleepy");
		}

		if (s.find("TA") != std::string::npos)
		{
			s.replace(s.find("TA"), s.length(), "totally awesome");
		}

		if (s.find("CCC") != std::string::npos)
		{
			s.replace(s.find("CCC"), s.length(), "Canadian Computing Competition");
		}
			
		if (s.find("CUZ") != std::string::npos)
		{
			s.replace(s.find("CUZ"), s.length(), "because");
		}
	
		if (s.find("YW") != std::string::npos)
		{
			s.replace(s.find("YW"), s.length(), "you’re welcome");
		}

		if (s.find("TTYL") != std::string::npos)
		{
			s.replace(s.find("TTYL"), s.length(), "talk to you later");
			std::cout << s << '\n';
			break;
		}

		else if (s.find("TY") != std::string::npos)
		{
			s.replace(s.find("TY"), s.length(), "thank-you");
		}

		std::cout << s << '\n';
	}

	return 0;
}