#include <iostream>

int main() {
	int n;
	int count;
	std::cin >> n >> count;
	int* arr = new int[n] {0};
	int start, end, temp;
	
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	for (int i = 0; i < count; i++) {
		std::cin >> start >> end;
		int distance = end - start;     // 시작점과 끝점 간격
		start -= 1;
		end -= 1;

		if (distance == 1) {			// 간격이 1일때
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
		}	
		else {											  
			for (int i = 0; i <= distance / 2; i++)
			{
				temp = arr[start + i];
				arr[start + i] = arr[end - i];
				arr[end - i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";

	delete[] arr;
	return 0;
}
