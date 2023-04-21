#include <iostream>
#include <string>

int main() {
    std::string s;
    int divisor, count = 0;
    std::cin >> s >> divisor;
    
    s.replace(s.length() - 2, 2, "00");
    int dividend = stoi(s);

    for (int i = 0; i < 100; i++) {        
        if (dividend % divisor == 0)
            break;
        dividend++;
        count++;
    }

    std::cout.width(2);
    std::cout.fill('0');
    std::cout << count;
    return 0;
}