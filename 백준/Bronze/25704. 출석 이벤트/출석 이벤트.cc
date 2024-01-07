#include <iostream>

int main()
{
	int n, price, temp;
	std::cin >> n >> price;

	int last_price = price;

	if (n >= 20)
	{
		temp = price - (price * 25 / 100);

	    if (last_price > temp)
		{
			last_price = temp;
		}
	}
	
	if (n >= 15)
	{
		temp = price - 2000;

		if (temp <= 0)
		{
			last_price = 0;
		}
		else if (last_price > temp)
		{
			last_price = temp;
		}
	}
	
	if (n >= 10)
	{
		temp = price - (price * 10 / 100);

		if (last_price > temp)
		{
			last_price = temp;
		}
	}
	
	if (n >= 5)
	{
		temp = price - 500;

		if (temp <= 0)
		{
			last_price = 0;
		}
		else if (last_price > temp)
		{
			last_price = temp;
		}

	}

	std::cout << last_price;

	return 0;
}