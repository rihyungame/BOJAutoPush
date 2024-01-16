#include <iostream>
#include <string>

int main() {
    int n, result = 0;
    std::cin >> n;

    std::string s;
    s = std::to_string(n);

    while (true)
    {
        int count = 1, temp = 1;
        for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
        {
            if (itr + 1 == s.end())
            {
                break;
            }
            else
            {
                count++;
            }
        }

        if (count == 1)
        {
            break;
        }        
        else
        {
            for (std::string::iterator itr = s.begin(); itr != s.end(); ++itr)
            {
                temp *= *itr - '0';
            }

            s = std::to_string(temp);
            result++;
        }

    }

    std::cout << result;
    return 0;
}