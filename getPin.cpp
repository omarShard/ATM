#include <iostream>
#include "atm.h"
using namespace std;

int getPin()
{
    const int pin = 1234;
    int userPin;
    cout << "Enter Your PIN: ";

    for(int i = 1; i <= 3; i++)
    { 
        cin >> userPin;
        
        if(userPin == pin)
        {
            cout << "Correct Pin\n";
            return 0; 
        }
        else if(i == 3)
        {
            cout << "You have exceeded the maximum number of PIN attempts. Your account is temporarily locked.\n";
            exit();
            return -1;
        }
        else
        {
            cout << "\aWrong Pin\a\n";
            cout << "Enter Your PIN: ";
        }
    }
    return -1;
}//end getPin
