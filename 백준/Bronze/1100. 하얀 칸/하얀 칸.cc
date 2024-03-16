#include <iostream>
#include <vector>
#include <string>

int main()
{
	int count = 0;
	std::string s;

	for (int i = 0; i < 8; i++)
	{
		int line = i + 1;

		std::cin >> s;				// 한줄씩 입력

		if (line % 2 == 1)			// 라인이 홀수일때
		{
			int inCount = 1;
			for (std::string::iterator itr = s.begin(); itr != s.end(); itr++)	// 한 줄을 선회
			{
				if (inCount % 2 == 1 && *itr == 'F')							// 홀수 줄의 홀수 칸들
				{
					count++;
				}

				inCount++;
			}
		}
		else if (line % 2 == 0)		// 라인이 짝수일때
		{
			int inCount = 1;
			for (std::string::iterator itr = s.begin(); itr != s.end(); itr++)	// 한 줄을 선회
			{
				if (inCount % 2 == 0 && *itr == 'F')							// 짝수 줄의 짝수 칸들
				{
					count++;
				}

				inCount++;
			}
		}
	}

	std::cout << count;

	return 0;
}