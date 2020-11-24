// Copyright (c) 2020 Wenda Zhao All rights reserved
//
// Created by Wenda Zhao
// Created on Nov 2020
// This program calculates the area and perimeter of rectangle
//    with user input

#include <iostream>

int main() {
    // this funtion calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²" << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm" << std::endl;
}
