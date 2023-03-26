#include <iostream>

int main()
{
    long long int a,b,c = 0;
    std::cin >> a >> b;
    c = (a > b) ? a - b : b - a;
    std::cout << c;

    return 0;
}