#include <iostream>
#include <string>

int main()
{
	int a,b,c;
	std::cin >> a >> b >> c;

	std::string s;
	s = std::to_string(a) + std::to_string(b);
	
	std::cout << a + b - c << '\n';
	std::cout << std::stoi(s) - c;
	return 0;
}