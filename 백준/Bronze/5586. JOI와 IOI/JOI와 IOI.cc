#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int jCount = 0, iCount = 0;
    size_t iLoc = 0, jLoc = 0;

    while (true) {
        jLoc = s.find("JOI", jLoc);
        if (jLoc != std::string::npos) {
            jCount++;
            jLoc += 2;
        } else {
            break;
        }
    }

    while (true) {
        iLoc = s.find("IOI", iLoc);
        if (iLoc != std::string::npos) {
            iCount++;
            iLoc += 2;
        } else {
            break;
        }
    }

    std::cout << jCount << '\n' << iCount;
    return 0;
}