// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program uses a function to calculate the
//     area of a triangle


#include <iostream>
#include <string>
#include <iomanip>

void CalculateArea(float base, float height) {
    // this function calculates the area of a triangle
    float area;

    // process
    area = base * height / 2;

    // output
    std::cout << "The area is " << std::fixed
              << std::setprecision(1) << std::setfill('0')
              << area << "cm²" << std::endl;
}

main() {
    // this function gets base and height

    std::string baseAsString;
    int baseAsNumber;
    std::string heightAsString;
    int heightAsNumber;

    std::cout << "Enter base (cm): ";
    std::cin >> baseAsString;

    std::cout << "Enter height (cm): ";
    std::cin >> heightAsString;

    std::cout << "" << std::endl;

    // calls CalculateArea with try and catch
    try {
        baseAsNumber = std::stoi(baseAsString);
        heightAsNumber = std::stoi(heightAsString);
        if (baseAsNumber > 0 && heightAsNumber > 0) {
            CalculateArea(baseAsNumber, heightAsNumber);
        } else {
            std::cout << "Integers must be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer" << std::endl;
        }
}
