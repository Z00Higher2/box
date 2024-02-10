// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4A
//Write a program box.cpp that asks the user to input width and height and prints a solid rectangular box of the requested size using asterisks.
//Also, print a line Shape: between user input and the printed shape (to separate input from output).

#include <iostream>
using namespace std;

int main(){
    int width, height; // declared width and height

    cout << "Input width: ";
    cin >> width; // User inputs width

    cout << "Input height: ";
    cin >> height; // User inputs height

    cout << endl;

    for (int row = 0; row < height; row++) { // for each row
    for (int col = 0; col < width-1; col++) { // for each column
 
        cout << "*"; // for each column of the box with width and height prints *
    
    }
    cout << "*" << "\n"; // for each row prints *
}

    return 0;
}