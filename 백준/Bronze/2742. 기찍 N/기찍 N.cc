#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = n; i > 0; i--) {
        std::cout << i;
        if (i > 1)
            std::cout << "\n";
    }
    return 0;
}