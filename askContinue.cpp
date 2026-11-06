#include <iostream>
#include "atm.h"
using namespace std;

void askContinue()
{
    
 char answer;
 cout << "Do you want to continueue? (y/n): ";
 cin >> answer;
 if (answer == 'y' || answer == 'Y') {atmMenu();}
 else {exit();}

}