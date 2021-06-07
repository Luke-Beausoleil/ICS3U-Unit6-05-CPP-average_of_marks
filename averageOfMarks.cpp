// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: June 2021
// This program finds the average of inputted marks

#include <iostream>
#include <string>
#include <list>

int Average(std::list<int> marks) {
    // this function calculates the average;
    int total = 0;
    int divisor = 0;
    int average;

    for (int counter : marks) {
        total += counter;
        divisor += 1;
    }
    average = (total / divisor);

    return average;
}

int main() {
    // this function receives input and calls a function

    // declaration
    std::list<int> marks;  // list
    std::string tempMarkString;  // variable
    int tempMark;  // variable
    int counter = 0;
    int average;

    // input
    std::cout << "Enter one mark at a time (in %). Enter '-1' to stop."
          << std::endl;
    try {
        std::cout << "Enter a mark (in %): ";
        std::cin >> tempMarkString;
        tempMark = std::stoi(tempMarkString);
        marks.push_back(tempMark);
        while (tempMark != -1) {
            std::cout << "Enter a mark (in %): ";
            std::cin >> tempMarkString;
            tempMark = std::stoi(tempMarkString);
            if (tempMark == -1) {
                break;
            }
            marks.push_back(tempMark);
        }
        average = Average(marks);
        std::cout << "The average is " << average << ".\nDone." << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Invalid Input\nDone.";
    }
}
