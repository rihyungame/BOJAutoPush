#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--)
            std::cout << "*";
        if (i > 1)
            std::cout << "\n";
    }
    return 0;
}