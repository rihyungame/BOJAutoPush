#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	std::string s1, s2;

	s1 = std::to_string(a) + std::to_string(b);
	s2 = std::to_string(c) + std::to_string(d);

	unsigned long long i1 = std::stoull(s1);
	unsigned long long i2 = std::stoull(s2);

	unsigned long long total = i1 + i2;


	std::cout << total;


	return 0;
}