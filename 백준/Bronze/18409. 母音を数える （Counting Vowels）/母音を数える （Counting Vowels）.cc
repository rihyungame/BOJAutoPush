#include <iostream>

int main() {
    int n, count = 0;
    std::cin >> n;
    char* arr = new char[n];
    std::cin >> arr;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'a')
            count++;
        else if (arr[i] == 'i')
            count++;
        else if (arr[i] == 'u')
            count++;
        else if (arr[i] == 'e')
            count++;
        else if (arr[i] == 'o')
            count++;
    }

    std::cout << count;
    return 0;
}