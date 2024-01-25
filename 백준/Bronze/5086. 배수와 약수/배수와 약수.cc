#include <iostream>

int main()
{
    int n1, n2;

    while (true)
    {
        std::cin >> n1 >> n2;

        if (n1 == 0 && n2 == 0)
        {
            break;
        }

        if (n2 % n1 == 0)
        {
            std::cout << "factor";
        }
        else if (n1 % n2 == 0)
        {
            std::cout << "multiple";
        }
        else
        {
            std::cout << "neither";
        }
        
        std::cout << '\n';
    }

    return 0;
}