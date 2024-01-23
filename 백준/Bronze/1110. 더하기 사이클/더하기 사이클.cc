#include <iostream>
#include <string>

int main()
{
	int n, temp, count = 0;
	std::cin >> n;
	std::string s;

	s = std::to_string(n);

	while (true)
	{
		count++;

		if (std::stoi(s) < 10)
		{
			s.insert(s.begin(), '0');
		}

		temp = (s[0] - '0' + s[1] - '0') % 10;			 // 십의 자리  // 일의 자리
		s = std::to_string(((s[1]) - '0') * 10 + temp);  // 첫 숫자의 일의 자리 // 첫 숫자의 두 자리 덧셈의 일의 자리 
			
		if (n == std::stoi(s))
		{
			break;
		}
	}

	std::cout << count;
	return 0;
}