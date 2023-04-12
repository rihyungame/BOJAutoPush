#include <iostream>

int main() {
    int count;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        int num;
        std::cin >> num;
        std::cout << num << " " << num << '\n';
    }
    return 0;
}