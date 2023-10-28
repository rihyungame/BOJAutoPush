#include <iostream>

int main()
{
	int own_ca, own_ba, own_pa;
	int need_ca, need_ba, need_pa;

	int lack_total = 0;

	std::cin >> own_ca >> own_ba >> own_pa;
	std::cin >> need_ca >> need_ba >> need_pa;

	if (own_ca < need_ca)
		lack_total += need_ca - own_ca;
	
	if (own_ba < need_ba)
		lack_total += need_ba - own_ba;
	
	if (own_pa < need_pa)
		lack_total += need_pa - own_pa;

	std::cout << lack_total;

	return 0;
}