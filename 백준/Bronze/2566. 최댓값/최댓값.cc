#include <iostream>
#include <climits>

int main() {
    int list[9][9] = {0}, max = INT_MIN;
    bool is_done = false;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cin >> list[i][j];
            
            if (list[i][j] > max)
            {
                max = list[i][j];
            }
        }
    }

    for (int i = 0; i < 9; ++i)
    {
        if (is_done)
        {
            break;
        }
        for (int j = 0; j < 9; j++)
        {
            if (max == list[i][j])
            {
                std::cout << max << '\n';
                std::cout << i + 1 << ' ' << j + 1;

                is_done = true;

                break;
            }
        }
    }

    return 0;
}