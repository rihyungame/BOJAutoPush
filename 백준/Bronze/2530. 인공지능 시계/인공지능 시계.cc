#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int h, m, s, plus;

	std::cin >> h >> m >> s;
	std::cin >> plus;

	if (plus > 3600)
	{
		h += (plus / 3600);
		plus %= 3600;
	}
	
	if (plus > 60)
	{
		m += (plus / 60);
		plus %= 60;
	}

	if (plus > 0)
	{
		s += plus;
	}

	if (s >= 60)
	{
		s -= 60;
		m += 1;
	}

	if (m >= 60)
	{
		m -= 60;
		h += 1;
	}

	if (h >= 24)
	{
		h %= 24;
	}

	std::cout << h << " " << m << " " << s;
	return 0;
}