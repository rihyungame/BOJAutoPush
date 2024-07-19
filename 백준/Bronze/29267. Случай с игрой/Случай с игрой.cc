#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);

	int k, n;
	std::cin >> n >> k;

	int save = 0;
	int bullet = 0;

	for (int i = 0; i < n; i++)
	{
		std::string s;
		std::cin >> s;

		if (s == "ammo")
		{
			bullet += k;
		}
		else if (s == "save")
		{
			save = bullet;
		}
		else if (s == "shoot" && bullet > 0)
		{
			bullet -= 1;
		}
		else if (s == "load")
		{
			bullet = save;
		}
		
		std::cout << bullet << '\n';
	}

	return 0;
}