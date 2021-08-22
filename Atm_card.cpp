#include<iostream>
using namespace std;
void showMenu(){
    cout<<"**************MENU*******************"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit" << endl;
    cout<<"3. Widthraw " <<endl;
    cout<<"4. Exit " <<endl;
}

int main()
{
    //check balance ,deposit ,widthraw, show menu
    int option;
     double balance =500;
   do{
    showMenu();
    cout<<"Option: ";
    cin >> option;
    system("cls");

    switch(option){
        case 1:
       
        cout<<"Balance is: "<<balance<<"$"<<endl;
        break;
        case 2:
        cout<<"Deposit amount: "<<endl;
        double depositamount;
        cin >> depositamount;
        balance += depositamount;
        break;
        case 3:
        cout<<"withdraw amount: "<<endl;
        double withdrawamount;
        cin >> withdrawamount;
        if(withdrawamount<=balance)
        balance -= withdrawamount;
        else{
            cout<<"Not enough money"<<endl;
        }
        break;

    }
    }while (option!=4);
    {
        
    }
    
}