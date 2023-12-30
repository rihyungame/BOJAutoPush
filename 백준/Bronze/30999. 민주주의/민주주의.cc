#include <iostream>

int main()
{
	int count, size = 0, win_count = 0;
	std::cin >> count >> size;
	
	char* p_ch = new char[size + 1];;
	

	for (int i = 0; i < count; i++)
	{
		int o_count = 0;
		scanf("%s", p_ch);
		
		for (int j = 0; j < size; j++)
		{
			if (p_ch[j] == 'O')
			{
				o_count++;
			}
		}

		if (o_count > size / 2)
		{
			win_count++;
		}
	}

	std::cout << win_count;

	delete[] p_ch;

	return 0;
}