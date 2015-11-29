//
//  main.cpp
//  Testing July292014
//
//  Created by Adrian Pichardo on 7/30/14.
//  Copyright (c) 2014 AP inc. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int integer1; // declare a variable integer 1
    int integer2; // declare a vaariable integer 2
    int sum; // Declare a variable for the sum of both integers
    
    cout << "Enter first integer: "; // Display a prompting message
    cin >> integer1; // Read keyboard (cin) for integer 1
    cout << "Enter second integer: "; // Display a prompting message for integer 2
    cin >> integer2; // Read keyboard (cin) for integer 2
    
    sum= integer1 + integer2; //Compute the sum
    
    cout << "The sum is: "<< sum;
    
    
    return 0;
    
}

