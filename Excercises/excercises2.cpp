//
// Created on 22.07.2026.
//
#include <iostream>

int main() {
    //create variables sum, val and limit to hold the sum, the starting point and th end.
    int sum = 0, val = 0, limit= 0;
    //ask user for the starting point as well as ending point
    std::cout << "Please enter the numbers from and to which the sum is to be calculated" << std::endl;
    std::cin >> val >> limit;
    //hold the original val for later
    const int val_org = val;
    while (val <= limit) {
        sum += val;
        val ++;
    }
    std::cout << "The sum of numbers from " << val_org << " to " << limit << " is: " << sum << std::endl;
}