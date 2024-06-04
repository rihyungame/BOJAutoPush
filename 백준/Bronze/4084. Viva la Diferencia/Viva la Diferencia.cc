#include <iostream>
#include <cmath>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int a, b, c, d;

	while (true)
	{
		std::cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			break;
		}

		int count = 0;

		while (true)
		{	
			if (a == b && b == c && c == d && d == a)
			{
				std::cout << count << '\n';
				break;
			}

			int newA = abs(a - b);
			int newB = abs(b - c);
			int newC = abs(c - d);
			int newD = abs(d - a);

			a = newA;
			b = newB;
			c = newC;
			d = newD;

			count++;		
		}	
	}

	return 0;
}