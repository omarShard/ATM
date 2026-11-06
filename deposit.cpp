#include <iostream>
#include "atm.h"
using namespace std;

void deposit()
{

    int twoHun, oneHun, fifty;
    cout << "waiting ........\n"; 
    cout << "How many banknotes of 200 (Max 50): ";
    cin >> twoHun;

    while (twoHun < 0 || twoHun > 50)
    {
        cout << "Please enter a valid number between 0 and 50: ";
        cin >> twoHun;
    }

    cout << "How many banknotes of 100 (Max 50): ";
    cin >> oneHun;

    while (oneHun < 0 || oneHun > 50)
    {
        cout << "Please enter a valid number between 0 and 50: ";
        cin >> oneHun;
    }

    cout << "How many banknotes of 50 (Max 50): ";
    cin >> fifty;

    while (fifty < 0 || fifty > 50)
    {
        cout << "Please enter a valid number between 0 and 50: ";
        cin >> fifty;
    }
  

    int total = (twoHun * 200)+ (oneHun * 100) + (fifty * 50);
    money += total;

    cout << "An amount of " << total << " has been added to your account.";
    cout << "Your account is now in it: " << money;
    cout << "\n==================================\n";

    askContinue();
}
