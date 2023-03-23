#include <iostream>
#define MAX 16

int main()
{
	char* alArr = new char[MAX];
	int numArr[MAX]{ 0 };
	int time = 0;
	
	std::cin.getline(alArr, MAX);

	for (int i = 0; i < MAX; i++)
		switch ((int)alArr[i])
		{
		case 65:
		case 66:
		case 67:
			numArr[i] = 2;
			break;
		case 68:
		case 69:
		case 70:
			numArr[i] = 3;
			break;
		case 71:
		case 72:
		case 73:
			numArr[i] = 4;
			break;
		case 74:
		case 75:
		case 76:
			numArr[i] = 5;
			break;
		case 77:
		case 78:
		case 79:
			numArr[i] = 6;
			break;
		case 80:
		case 81:
		case 82:
		case 83:
			numArr[i] = 7;
			break;		
		case 84:
		case 85:
		case 86:
			numArr[i] = 8;
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			numArr[i] = 9;
			break;
		default:
			break;
		}

	for (int i = 0; i < MAX; i++)
		if(numArr[i] != 0)
			time += numArr[i] + 1;

	std::cout << time;
	return 0;

}