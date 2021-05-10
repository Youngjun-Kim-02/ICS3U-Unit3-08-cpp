// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program checks if year is a leap year or not

#include <iostream>

int main() {
    // this function checks if year is a leap year or not
    std::string yearAsString;
    int yearAsNumber;

    // input
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        yearAsNumber = std::stoi(yearAsString);
        if (yearAsNumber % 4 == 0) {
            if (yearAsNumber % 100 == 0) {
                if (yearAsNumber % 400 == 0)
                    std::cout << yearAsNumber << " is a leap year.";
                else
                    std::cout << yearAsNumber << " is a common year.";
            }
            else
                std::cout << yearAsNumber << " is a leap year.";
        }
        else
            std::cout << yearAsNumber << " is a common year.";
    } catch (std::invalid_argument) {
        std::cout << "That was not valid input.";
    }
}
