//
// Created on 22.07.2026.
//
#include <iostream>

int main() {
    //initiate two vars to hold integers
    int int1 = 0, int2 = 0;
    //prompt user for two integers
    std::cout << "Please provide two integers between which to print the numbers in the range" << std::endl;
    std::cin >> int1 >> int2;
    //silently handle if the first integer is the larger one
    if (int1 > int2) {
        int1 -= int2;
        int2 += int1;
        int1 = int2 - int1;
        std::cout << int1 << int2 << std::endl;
    }
    //print the numbers in range using while
    while (int1 <= int2) {
        std::cout << int1 << std::endl;
        int1++;
    }
}