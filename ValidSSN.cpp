// Purpose: Implement bool SSN function
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include "ValidSSN.h"
#include <cctype>                                   // library where isdigit(c) located - lots more fun functions here!

using std::string;

bool isValidSSN (const string& ssn)
{
    string checkSsn = "###-##-####";
    if( ssn.length() != checkSsn.length())           // if length of given ssn not the same as default length (checkSsn)
    {
        return false;
    }

    for(size_t i = 0; i < ssn.length(); ++i)
    {
        if(ssn[i] != '-')                            // check 'I' is not a dash '-'
        {
            if(!isdigit(ssn[i]))                 // check if 'I' is a digit
            {
                return false;
            }
        } else
        {
            if(ssn[i] != '-')                      // if not digit then check if it's a dash '-'
            {
                return false;
            }
        }
    }
    return true;
}