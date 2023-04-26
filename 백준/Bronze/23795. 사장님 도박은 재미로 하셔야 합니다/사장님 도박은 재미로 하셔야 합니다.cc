#include <iostream>

int main() {
    long long int total = 0;
    int n = 0;
    while (true) {
        std::cin >> n;
        if (n == -1)
            break;
        total += n;
    }
    std::cout << total;
    return 0;
}