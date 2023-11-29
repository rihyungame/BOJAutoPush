#include <iostream>
#include <vector>

int main()
{
	std::vector<int> scores;
	int n, count, kor_math, eng_reserch, sec_lang = 0;
	long long total = 0;

	std::cin >> count;
	for (int i = 0; i < count; i++)
	{
		std::cin >> n;
		scores.push_back(n);
	}

	if (scores[0] > scores[2])
		kor_math = abs(scores[0] - scores[2]) * 508;
	else
		kor_math = abs(scores[0] - scores[2]) * 108;

	if (scores[1] > scores[3])
		eng_reserch = abs(scores[1] - scores[3]) * 212;
	else
		eng_reserch = abs(scores[1] - scores[3]) * 305;

	if (scores.size() > 4)
		sec_lang = scores[4] * 707;

	total = (kor_math + eng_reserch + sec_lang) * 4763;
	std::cout << total;

	return 0;

}