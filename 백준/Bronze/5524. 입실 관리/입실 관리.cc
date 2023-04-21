#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string* s_arr = new std::string[n];
    for (int i = 0; i < n; i++) {
        std::cin >> s_arr[i];
        for (int j = 0; j < s_arr[i].size(); j++) {
            s_arr[i][j] = tolower(s_arr[i][j]);
        }
        std::cout << s_arr[i] << "\n";
    }

    delete[] s_arr;
    return 0;
}