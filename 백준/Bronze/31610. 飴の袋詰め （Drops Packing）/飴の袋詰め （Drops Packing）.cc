#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a * b + c;
    return 0;
}