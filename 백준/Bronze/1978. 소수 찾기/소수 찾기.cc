#include <iostream>

int main() {
    int count, result = 0;
    std::cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int n;
        std::cin >> n;

        for (int j = 2; j <= n; ++j)
        {
            if (j == n)
            {
                result++;
            }
            else if (n % j == 0)
            {
                break;
            }

        }
    }

    std::cout << result;

    return 0;
}