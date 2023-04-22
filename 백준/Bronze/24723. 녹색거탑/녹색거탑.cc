#include <iostream>

int main() {
    int n, result = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++)
        result *= 2;
    std::cout << result;
    return 0;
}