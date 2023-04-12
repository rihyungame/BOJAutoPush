#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string a = s.substr(0, 1);
    std::string b = s.substr(1, 1);
    
    if (std::stoi(a) == std::stoi(b))
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}