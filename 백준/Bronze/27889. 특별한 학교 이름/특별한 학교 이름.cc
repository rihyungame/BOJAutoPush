#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    
    if(s =="NLCS")
        std::cout << "North London Collegiate School";
    else if(s =="BHA")
        std::cout << "Branksome Hall Asia";
    else if(s =="KIS")
        std::cout << "Korea International School";
    else if(s =="SJA")
        std::cout << "St. Johnsbury Academy";
    
    return 0;
}