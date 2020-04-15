//
//  main.cpp
//  quiz_6
//
//  Created by Lucas Dahl on 4/15/20.
//  Copyright © 2020 Lucas Dahl. All rights reserved.
//


// This program is to display each seating classes revenue and the
// total revenue of the football game.

// Header
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    // Properties
    int aSold, bSold, cSold, aOffset, bOffset, cOffset;
    float classA = 15.3, classB = 12.25, classC = 9.9,
    aSales, bSales, cSales, totalRev;
    string spacer = "        "; // used to line up the grid
    
    // Display the message
    cout << endl;
    cout << setw(6) << " " << "Softball Revenue Calculator\n" << "\nPlease enter the requied data below then hit enter or return.\n";
    
    // Gather the data from the user
    cout << "How many tickets of class A were sold? ";
    cin >> aSold;
    cout << "How many tickets of class B were sold? ";
    cin >> bSold;
    cout << "How many tickets of class C were sold? ";
    cin >> cSold;
    
    // Calcuations for totals
    aSales = classA * aSold;
    bSales = classB * bSold;
    cSales = classC * cSold;
    totalRev = cSales + cSales + cSales;
    
    // Set the offset by checking the length of the number
    // This is to keep the table clean, but anything larger than
    // 99999.99 will have a fixed offset
    
    // For Class A seatting
    if (aSales <= 99.99) {
        aOffset = 11;
    } else if (aSales <= 999.99) {
        aOffset = 10;
    } else if (aSales <= 9999.99) {
        aOffset = 9;
    } else if (aSales <= 99999.99) {
        aOffset = 8;
    } else {
        aOffset = 7;
    }
    
    // For Class B seatting
    if (bSales <= 99.99) {
           bOffset = 11;
       } else if (bSales <= 999.99) {
           bOffset = 10;
       } else if (bSales <= 9999.99) {
           bOffset = 9;
       } else if (bSales <= 99999.99) {
           bOffset = 8;
       } else {
           bOffset = 7;
       }
    
    // For Class C seatting
    if (cSales <= 99.99) {
           cOffset = 11;
       } else if (cSales <= 999.99) {
           cOffset = 10;
       } else if (cSales <= 9999.99) {
           cOffset = 9;
       } else if (cSales <= 99999.99) {
           cOffset = 8;
       } else {
           cOffset = 7;
       }
    

    
    // Display the data in a grid format
    cout << endl;
    cout << setprecision(2) << fixed << right;
    
    // table header
    cout  << spacer << setw(6) << "Price" << setw(6) << " " << "Number Sold" << setw(6) << " " << "Total Price" << endl;
    // Line 1
    cout << "Class A " << "$" << classA << setw(6) << " " << setw(6) << " " << aSold << setw(aOffset) << " $" << aSales << endl;
    // Line 2
    cout << "Class B " << "$" << classB << setw(6) << " " << setw(6) << " " << bSold << setw(bOffset) << " $" << bSales << endl;
    // Line 3
    cout << "Class C " << "$" << classC << setw(6) << " " << setw(6) << " " << " "+to_string(cSold) << setw(cOffset) << " $" << cSales << endl; //to_string is to offset the total sold
    // Display the total
    cout << "Total Revenue" <<setw(25) << "$" << totalRev << endl;
    
    // Exits the program
    return 0;
}
