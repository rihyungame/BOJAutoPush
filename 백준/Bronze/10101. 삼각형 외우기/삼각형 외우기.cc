#include <iostream>

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    if ((num1 + num2 + num3) != 180)
        std::cout << "Error";

    else if ((num1 == 60) && (num2 == 60) && (num3 == 60))
        std::cout << "Equilateral";

    else if ((num1 == num2) || (num1 == num3) || (num2 == num3))
        std::cout << "Isosceles";

    else
        std::cout << "Scalene";

    return 0;
}