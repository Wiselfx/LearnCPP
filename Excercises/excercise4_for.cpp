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
    }
    /*recreated using for loop. int3 to hold the starting integer and the expression that keeps increasing
     *the value of int3 after the body prints it until int3 is equal to int2 */
    for (int int3 = int1; int3 <= int2; ++int3 ) {
        std::cout << int3 << std::endl;
    }
}