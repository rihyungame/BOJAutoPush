#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool comp(std::string s1, std::string s2)
{
    return s2.length() > s1.length();
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> string_vec;

    for (int i = 0; i < n; ++i)
    {
        std::string s;
        std::cin >> s;
        string_vec.push_back(s);
    }

    std::stable_sort(string_vec.begin(), string_vec.end());
    
    std::stable_sort(string_vec.begin(), string_vec.end(), comp);

    string_vec.erase(std::unique(string_vec.begin(), string_vec.end()), string_vec.end());

    for (std::string s : string_vec)
    {
        std::cout << s << '\n';
    }

    return 0;
}