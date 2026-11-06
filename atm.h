#ifndef ATM_H
#define ATM_H

extern int money;
extern int moneyWithdrawed;
extern int moneyDeposited;

int getPin();
void withdraw();
void deposit();
void check();
void exit();
void atmMenu();
void askContinue();
#endif