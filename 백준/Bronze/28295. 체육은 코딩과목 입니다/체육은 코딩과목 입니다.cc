#include <iostream>
#define COUNT 10

class SchoolMove
{
public:
	void Left()
	{
		dir--;

		if (dir == -1)
			dir = 3;
	}
	void Right()
	{
		dir++;

		if (dir == 4)
			dir = 0;
	}

	void Turn()
	{
		if (dir == 0)
			dir = 2;
		else if (dir == 1)
			dir = 3;
		else if (dir == 2)
			dir = 0;
		else if (dir == 3)
			dir = 1;
	}
	void Print()
	{
		switch (dir)
		{
		case 0:
			std::cout << 'N';
			break;
		case 1:
			std::cout << 'E';
			break;
		case 2:
			std::cout << 'S';
			break;
		case 3:
			std::cout << 'W';
			break;
		}
	}

private:
	int dir = 0;
};

int main()
{
	SchoolMove schoolMove;

	for (int i = 0; i < COUNT; i++)
	{
		int n;
		std::cin >> n;

		if (n == 1)
			schoolMove.Right();
		else if (n == 2)
			schoolMove.Turn();
		else if (n == 3)
			schoolMove.Left();
	}

	schoolMove.Print();

	return 0;
}