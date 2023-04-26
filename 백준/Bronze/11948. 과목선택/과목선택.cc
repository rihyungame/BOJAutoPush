#include <iostream>
#define G1_SIZE 4
#define G2_SIZE 2


int main() {
    int g1[G1_SIZE];
    int g2[G2_SIZE];
    int count;

    for (int i = 0; i < G1_SIZE; i++)
        std::cin >> g1[i];

    for (int i = 0; i < G2_SIZE; i++)
        std::cin >> g2[i];

    for (int i = 0; i < G1_SIZE - 1; i++) {
        for (int j = i + 1; j < G1_SIZE; j++) {
            int temp;
            if (g1[i] < g1[j]) {
                temp = g1[i];
                g1[i] = g1[j];
                g1[j] = temp;
            }
        }
    }

    if (g2[0] < g2[1]) {
        int temp;
        temp = g2[0];
        g2[0] = g2[1];
        g2[1] = temp;
    }

    count = g1[0] + g1[1] + g1[2] + g2[0];
    std::cout << count;

    return 0;
}