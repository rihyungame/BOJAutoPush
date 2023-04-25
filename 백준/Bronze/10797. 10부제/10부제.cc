#include <iostream>

int main() {
    int day;
    int n1, n2, n3, n4, n5;
    int count = 0;

    std::cin >> day;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    if (n1 == day)
        count++;

    if (n2 == day)
        count++;

    if (n3 == day)
        count++;

    if (n4 == day)
        count++;

    if (n5 == day)
        count++;

    std::cout << count;
    return 0;
}