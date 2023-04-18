#include <iostream>
#define swap(x, y) { int temp; temp = x; x = y; y = temp; }

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;
    
    if (num1 < num2)
        swap(num1, num2);
    
    if (num1 < num3)
        swap(num1, num3);

    if (num2 < num3)
        swap(num2, num3);

    std::cout << num2;
    return 0;
}