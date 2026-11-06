#include <iostream>
#include "atm.h"
using namespace std;
int custom()
{
    int customAmount;
    cout << "Enter the amount to withdraw: ";
    cin >> customAmount;
    while (customAmount < 50 || customAmount > 15000)
    {
        if (customAmount < 50 )
        {
                cout << "Minimum withdrawal amount(50): ";
                cin >> customAmount;
        }
        else 
        {   
                cout << "Limt to withdraw (15000): ";
                cin >> customAmount;
        }
    }
    return customAmount;
}//end custom
void withdraw()
{
    int withdrawAmount;
    cout << "Select the amount to withdraw\n1. 100\n2. 500\n3. 1000\n4. 2000\n5. 4000\n6.Withdraw Another Amount\n";
    cin >> withdrawAmount;   

      int amountToWithdraw = 0;
     switch(withdrawAmount)
       {
          case 1: amountToWithdraw = 100; break;
          case 2: amountToWithdraw = 500; break;
          case 3: amountToWithdraw = 1000; break;
          case 5: amountToWithdraw = 4000; break;
          case 6:  amountToWithdraw = custom();break;
          default:  cout << "Invalid choice.\n";  
          askContinue();
            return;
        }

if (amountToWithdraw > money)
    {
        cout << "Sorry, you do not have enough money in your account.\n";
    }
    else
   {
        money -= amountToWithdraw;
        cout << "Withdrawing " << amountToWithdraw << "...\n";
        cout << "Your remaining balance is: " << money << "\n";
   }

  askContinue();

}//end withdrawAmount
