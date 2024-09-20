#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

    double a, w, v;
    std::cin >> a >> w >> v;


    if (a <= w / v)
    {
        std::cout << 1;
    }
    else
    {
        std::cout << 0;
    }

    return 0;
}