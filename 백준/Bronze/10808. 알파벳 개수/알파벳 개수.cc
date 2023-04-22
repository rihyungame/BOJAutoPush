#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    for (int i = 0; i < 26; i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'a' + i) {
                count++;
            }
        }
        std::cout << count << " ";
    }
    return 0;
}