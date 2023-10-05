#include <iostream>

int main()
{
	for (int i = 0; i < 3; i++)
	{

		int in_h, in_m, in_s;
		int out_h, out_m, out_s;
		int result_h, result_m, result_s;
		std::cin >> in_h >> in_m >> in_s
			>> out_h >> out_m >> out_s;


		if (out_s - in_s < 0)
		{
			in_s -= out_s;
			out_s = 60;
			
			if (out_m == 0)
			{
				out_m = 59;
				out_h -= 1;
			}
			else
				out_m -= 1;

		}

		if (out_m - in_m < 0)
		{
			in_m -= out_m;
			out_m = 60;
			out_h -= 1;			
		}

		result_s = out_s - in_s;
		result_m = out_m - in_m;
		result_h = out_h - in_h;

		std::cout << result_h << " " << result_m << " " << result_s << '\n';
	}

	return 0;
}