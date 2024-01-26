#include <iostream>

int main()
{
    int n1, n2, n3, temp;
    std::cin >> n1 >> n2 >> n3;

    if (n1 < n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n1 < n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if (n2 < n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    while (true)
    {
        if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2)
        {
            std::cout << n1 + n2 + n3;
            break;
        }
        else
        {
            n1--;
        }
    }

    return 0;
}