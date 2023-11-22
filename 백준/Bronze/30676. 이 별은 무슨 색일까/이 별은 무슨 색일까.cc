#include <iostream>

/*

빨간색: 620nm 이상 780nm 이하
주황색 : 590nm 이상 620nm 미만
노란색 : 570nm 이상 590nm 미만
초록색 : 495nm 이상 570nm 미만
파란색 : 450nm 이상 495nm 미만
남색 : 425nm 이상 450nm 미만
보라색 : 380nm 이상 425nm 미만

//빨간색이면 "Red", 주황색이면 "Orange", 노란색이면 "Yellow", 초록색이면 "Green", 파란색이면 "Blue", 남색이면 "Indigo", 보라색이면 "Violet"을 출력한다.
*/

int main()
{
	int n;
	std::cin >> n;

	if (n >= 620 && n <= 780)
		std::cout << "Red";
	else if (n >= 590 && n <= 620)
		std::cout << "Orange";
	else if (n >= 570 && n <= 590)
		std::cout << "Yellow";
	else if (n >= 495 && n <= 570)
		std::cout << "Green";
	else if (n >= 450 && n <= 495)
		std::cout << "Blue";
	else if (n >= 425 && n <= 450)
		std::cout << "Indigo";
	else if (n >= 380 && n <= 425)
		std::cout << "Violet";

	return 0;
}