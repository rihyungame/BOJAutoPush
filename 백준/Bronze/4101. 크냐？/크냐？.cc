#include <iostream>

int main()
{
    int a, b;
    while (true) {
        std::cin >> a >> b;
        if (a > b)
            std::cout << "Yes" << std::endl;
        else if (a == 0 && b == 0)
            return 0;
        else if (a < b || a == b)
            std::cout << "No" << std::endl;
    }
}