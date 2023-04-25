#include <iostream>

int main() {
    int n1, n2;
    while (true) {
        std::cin >> n1 >> n2;
        if ((n1 + n2) == 0)
            break;
        std::cout << n1 + n2 << "\n";
    }
    return 0;
}