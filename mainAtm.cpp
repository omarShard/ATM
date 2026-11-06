#include <iostream>
#include "atm.h"
using namespace std;

    int money = 50000;
    int moneyWithdrawed = 0;
    int moneyDeposited = 0;

int main()
{

    int status = getPin();
     if (status == 0)
     {
        cout << "\n=====ATM MAIN MENU=====\n";
        atmMenu();
     } 

     return 0;
} 
