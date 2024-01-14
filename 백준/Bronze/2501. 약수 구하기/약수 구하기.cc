#include <iostream>
#include <vector>

int main() {
    int n, k;

    std::cin >> n >> k;
    std::vector<int> vec;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            vec.push_back(i);
        }
    }

    if (k > vec.size() && vec.size() != 1)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << vec[k - 1];
    }

    return 0;
}