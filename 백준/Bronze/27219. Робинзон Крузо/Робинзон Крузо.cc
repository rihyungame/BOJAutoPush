#include <iostream>

int main() {
    int num;
    int a, b;

    std::cin >> num;

    a = num / 5;
    b = num % 5;

    for (int i = 0; i < a; i++)
        std::cout << "V";

    for (int i = 0; i < b; i++)
        std::cout << "I";

    return 0;
}