#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	int n = 1;
	std::vector<int> sequence;
	std::vector<int> full_stack;
	std::string s;

	for (; n <= 10000; n++)
	{
		int result = 0;
		s = std::to_string(n);

		for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
		{
			result += *itr - '0';
		}

		result += n;

		if (std::find(sequence.begin(), sequence.end(), result) == sequence.end())
		{
			sequence.push_back(result);
		}		
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (std::find(sequence.begin(), sequence.end(), i) == sequence.end())
		{
			full_stack.push_back(i);
		}
	}

	for (int i = 0; i < full_stack.size(); i++)
	{
		std::cout << full_stack[i] << '\n';
	}

	return 0;
}