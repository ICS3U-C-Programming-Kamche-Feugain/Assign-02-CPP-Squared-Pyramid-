// Copyright (c) 2025 Immaculata HS All rights reserved.
//
// Created by: Kamche
// Created on: Sep 2025
// This program is used to calculate
// the volume and surface area of a squared pyramid
#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Welcome message
    std::cout << "Welcome to the Squared Pyramid Calculator!" << std::endl;

    std::string name;
    std::cout << "Enter your name to start the program: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    // Ask the user for the side length and height
    double sideLength;
    double height;

    // Get the side length and height from the user
    std::cout << "Enter the side length of the squared pyramid in mm: ";
    std::cin >> sideLength;
    std::cout << "Enter the height of the squared pyramid in mm: ";
    std::cin >> height;

    // Calculate the volume and surface area
    double volume = (1.0/3.0) *
     sideLength * sideLength * height;
    double surfaceArea = std::sqrt(
    (sideLength/2.0) * (sideLength/2.0)
    + height * height
);

    // Round the resultsto two decimal places
    double roundedVolume = std::round(volume * 100.0) / 100.0;
    double roundedSurfaceArea = std::round(surfaceArea * 100.0) / 100.0;

    // display the results to the user
    std::cout << "The surface area of the squared pyramid is "
    << roundedSurfaceArea << " mm²." << std::endl;
    std::cout << "The volume of the squared pyramid is "
    << roundedVolume << " mm³." << std::endl;
}
