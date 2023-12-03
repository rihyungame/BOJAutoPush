#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::cin >> s;

	if (s == "fdsajkl;" || s == "jkl;fdsa")
	{
		std::cout << "in-out";
	}
	else if (s == "asdf;lkj" || s ==";lkjasdf")
	{
		std::cout << "out-in";
	}
	else if (s == "asdfjkl;")
	{
		std::cout << "stairs";
	}
	else if (s == ";lkjfdsa")
	{
		std::cout << "reverse";
	}
	else
	{
		std::cout << "molu";
	}

	return 0;
}