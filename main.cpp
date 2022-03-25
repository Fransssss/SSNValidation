// Title: Simple SSN Validation
// Purpose: Practice call bool validation SSN to validate user-SSN-number input
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include <iostream>
#include "ValidSSN.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string numAsString;                      // default value is empty string "" - don't worry about initial initialization for object type string
    bool valid;

    cout << " Enter SSN number to validate with these format '#' for number (###-##-####) :" << endl;
    cin >> numAsString;
    valid = isValidSSN(numAsString);     // calls isvalid function to validate user input

    if(!valid)
    {
        cout << numAsString << " is not a valid SSN number " << endl;
    } else
    {
        cout << numAsString << " is a valid SSN number " << endl;
    }
    return 0;
}
