#include <iostream>

int main() {
    int n1, n2, n3, n4;
    int m1, m2, m3, m4;

    int total_a, total_b;

    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cin >> m1 >> m2 >> m3 >> m4;

    total_a = n1 + n2 + n3 + n4;
    total_b = m1 + m2 + m3 + m4;

    if (total_a < total_b)
        std::cout << total_b;
    else
        std::cout << total_a;

    return 0;
}