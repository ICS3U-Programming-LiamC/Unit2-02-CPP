// Copyright (c) Year Your Name All rights reserved.
//
// Created by: Liam Csiffary
// Date: April 30, 2021
// This program calculates the area and perimeter of a square
// using the users input.

#include <iostream>
#include <cmath>

int len;
int width;
int area;
char units[10];

int main() {
  std::cout << "What is the width of your rectangle: ";
  std::cin >> width;

  std::cout << "What is the length of your rectangle: ";
  std::cin >> len;

  std::cout << "What are your units: ";
  std::cin >> units;

  std::cout << "\nThe area of your rectangle is " \
  << len * width << units << "^2";

  std::cout << "\nThe perimeter of your rectangle is " \
  << 2*(len + width) << units;
}
