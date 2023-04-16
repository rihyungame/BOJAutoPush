#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    a *= 100;
    
    if (a >= b)
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}