/*
Title: Chapter 2 Exercise 10 - Miles per Gallon - Part A
File Name : Chapter2Exercise10_Brion_Blais
Programmer : Brion Blais
Date : 09 / 2024
Requirements :
    A car holds 15 gallons of gasoline and can travel 375 miles before refueling. 
    Write a program that calculates the number of miles per gallon the car gets. 
    Display the result on the screen.
  
    Place this is the main branch of GitHub.

    Create a branch that revises your code so:
        • that the user can enter the number of gallons and the miles driven.

    Submitted the URL in Canvas for that project.

 
Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven/Gallons of Gas Used

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int gallonsGas = 15;
    int milesCarCanDrive = 375;
    int milesPerGallon = milesCarCanDrive / gallonsGas;
    
    cout << "This car gets " << milesPerGallon << " miles per gallon of gasoline.\n";

    return 0;
}