#include <iostream>

int main()
{
    int m, k;
    std::cin >> m >> k;
    
    if (m % k == 0)
    {
        std::cout << "Yes";
    }
    else
    {
        std::cout << "No";
    }
    return 0;
}