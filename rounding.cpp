// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/12/08
// Gets the user inputs for a decimal and how many decimal places,
// Then uses a function to calculate the rounded decimal.

#include <math.h>
#include <iostream>
#include <string>

// To format the address
void RoundDecimal(float &decimal, int round) {
    // Rounding the number
    decimal = decimal * pow(10, round);
    decimal = decimal + 0.5;
    decimal = floor(decimal);
    decimal = decimal / pow(10, round);
}

int main() {
    // Variables
    std::string userDecimalString, userRoundString;
    float userDecimal;
    int userRound;

    // Title
    std::cout << "Rounding numbers\n";

    std::cout << "Please enter your decimal: ";
    std::cin >> userDecimalString;

    std::cout << "Please enter how many decimal places: ";
    std::cin >> userRoundString;

    try {
        userDecimal = stof(userDecimalString);
        userRound = stoi(userRoundString);

        if (userRound < 0) {
            std::cout << "Please enter a positive number!";
        } else {
            RoundDecimal(userDecimal, userRound);
            std::cout << userDecimal << "\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number! \n";
    }
}
