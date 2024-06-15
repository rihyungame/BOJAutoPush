#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	
	std::string var;
	std::cin >> var;


	for (std::string::size_type i = 0; i < var.size(); i++)
	{
		char ch = var[i];
		int temp = ch - '0';

		switch (temp)
		{
		case 0:
			std::cout <<
				"0000\n"
				"0  0\n"
				"0  0\n"
				"0  0\n"
				"0000\n";
			break;
		case 1:
			std::cout <<
				"   1\n"
				"   1\n"
				"   1\n"
				"   1\n"
				"   1\n";
			break;
		case 2:
			std::cout <<
				"2222\n"
				"   2\n"
				"2222\n"
				"2\n"
				"2222\n";
			break;
		case 3:
			std::cout << 
				"3333\n"
				"   3\n"
				"3333\n"
				"   3\n"
				"3333\n";				
			break;
		case 4:
			std::cout <<
				"4  4\n"
				"4  4\n"
				"4444\n"
				"   4\n"
				"   4\n";
			break;
		case 5:
			std::cout <<
				"5555\n"
				"5\n"
				"5555\n"
				"   5\n"
				"5555\n";
			break;
		case 6:
			std::cout <<
				"6666\n"
				"6\n"
				"6666\n"
				"6  6\n"
				"6666\n";
			break;
		case 7:
			std::cout <<
				"7777\n"
				"   7\n"
				"   7\n"
				"   7\n"
				"   7\n";
			break;
		case 8:
			std::cout <<
				"8888\n"
				"8  8\n"
				"8888\n"
				"8  8\n"
				"8888\n";
			break;
		case 9:
			std::cout <<
				"9999\n"
				"9  9\n"
				"9999\n"
				"   9\n"
				"   9\n";
			break;
		}
		std::cout << "\n";
	}

	return 0;
}