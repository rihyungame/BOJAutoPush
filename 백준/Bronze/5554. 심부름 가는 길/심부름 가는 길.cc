#include <iostream>

int main() {
    int n1,n2,n3,n4;
    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << (n1 + n2 + n3 + n4) / 60 << "\n";
    std::cout << (n1 + n2 + n3 + n4) % 60;
    return 0;
}