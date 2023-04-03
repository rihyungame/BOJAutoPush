#include <iostream>
#include <string>

int main()
{
	int num;
	std::cin >> num;
	std::string* arr = new std::string[num];
	bool* result = new bool[num] {false};
	for (int i = 0; i < num; i++) {
		std::cin >> arr[i];
		for (std::string::iterator iter = arr[i].begin(); iter != arr[i].end(); ++iter) {
			if (arr[i].size() >= 6 && arr[i].size() <= 9) {
				result[i] = true;			
			}
			else {
				result[i] = false;
				break;
			}
		}
	}
	
	for (int i = 0; i < num; i++) {	
		if (result[i])
			std::cout << "yes" << '\n';
		else
			std::cout << "no" << '\n';
	}
	return 0;
}