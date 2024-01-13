#include <iostream>
#include <vector>

int main() {
    int n, count;
    std::cin >> n >> count;

    std::vector<int> vec(n);

    for (int i = 0; i < count; ++i)
    {
        int a, b;
        std::cin >> a >> b;

        vec[a - 1]++;
        vec[b - 1]++;
    }

    for (int value : vec)
    {
        std::cout << value << '\n';
    }

    return 0;
}