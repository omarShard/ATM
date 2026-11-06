#include <iostream>
#include "atm.h"
using namespace std;

void atmMenu()
{
      int choice;
    cout << "1. Withdraw\n2. Deposit\n3. Check Balance\n4. Exit\n";
    cin >> choice ;

  switch(choice)
     {
         case 1: withdraw();break;   
         case 2: deposit(); break;
         case 3: check(); break;
         case 4: exit(); break;
         default: cout << "Invalid choice.\n";
     }

}
