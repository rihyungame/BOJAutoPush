#include <iostream>

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    if (num2 == 1 || !(num1 >= 12 && num1 <= 16))
        std::cout << 280;

    else if ((num1 >= 12 && num1 <= 16) && num2 == 0)
        std::cout << 320;

    return 0;
}