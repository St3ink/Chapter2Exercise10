/*
Chapter 2 Exercise 10 - Distance Per Tank of Gas  
File Name: Chp2Exc10.cpp
Kason Steiner
09/2024
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so that the user can enter the number of gallons and the miles driven.
*/  

#include <iostream>
using namespace std;

int main() {
  
 int gallons = 15;
 int milesDriven = 375;

int mpg = milesDriven / gallons;

cout << "The car gets " << mpg << " miles per gallon.\n";
  
  return 0;
}