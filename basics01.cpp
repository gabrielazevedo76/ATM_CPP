#include <iostream>
using namespace std;


void showMenu(){

  cout << "*****MENU*****" << endl;
  cout << "1. Check balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "**************" << endl;
}


int main() {

 //check balance, deposit, show menu

  int option;
  double balance = 500;
  int on = 0;


  while(on == 0) {

    showMenu();
    cout << "Option: ";
    cin >> option;

    switch (option) {
      case 1:
        cout << "Balance is: " << balance << " $" << endl;
        break;
      case 2: 
        cout << "Deposit amount: ";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
        break;
      case 3:
        cout << "Withdraw amount: ";
        double withdrawAmount;
        cin >> withdrawAmount;
        if (withdrawAmount <= balance){
          balance -= withdrawAmount;
        }else {
          cout << "You don't have enought money!" << endl;
          }
        break;
      case 4:
        cout << "exited!" << endl;
        on = 1;
        break;
      default:
        cout << "Chosse a valid number!" << endl;
        break;
   }
  }

 return 0;
}
