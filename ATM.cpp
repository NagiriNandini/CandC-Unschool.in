#include <iostream>
using namespace std;

int amount=1000, deposit, withdraw;
int choice, pin, k;
int transaction =1;
 
int main()
{
	while (pin!=1234)
	{
		cout<<"********Welcome to your bank**************"<<endl;
		cout<<"Enter your pin please:"<<endl;
		cin>>pin;
		if (pin!=1234)
		cout<<"PLEASE ENTER VALID PASSWORD"<<endl;
	}
	do
	{
		cout<<"1. Balance Enquiry"<<endl;
		cout<<"2. Cash Withdraw"<<endl;
		cout<<"3. Deposit Cash"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"Your bank balance is Rs :"<< amount<<endl;
			break;
		case 2:
			cout<<"Please enter amount to withdraw: ";
			cin>>withdraw;
			if (withdraw%100==0)
			{
			  if(amount>=withdraw)
			  {
			  	amount = amount - withdraw;
				cout<<" please collect your cash"<<endl;
				cout<<" Your available balance is: "<<amount<<endl;
			  }
		      else
				{
					cout<<"You dont have enough amount to withdraw"<<endl;
				}
			}
			else
			{
				cout<<"Enter withdrawal amount in 100 multiples"<<endl;
			}
			break;
		case 3:
			cout<<"please enter amount to deposit:";
			cin>>deposit;
                        amount = amount + deposit;
			cout<<"Thank you for depositing,your new balance is :"<<amount<<endl;
			break;
		case 4:
			cout<<"Thank you for banking with us,have a nice day"<<endl;
			break;
		default:
			cout<<"Invalid choice"<<endl;
		}
		cout<<"Do you want another transaction?"<<endl;
		cout<<"press 1 to proceed and 2 to exit"<<endl;
		fflush(stdin);
		cin>>transaction;
		if (transaction==2)
			     k=1;     
        
	} while(!k);
	cout<<"Thanks for using ATM"<<endl;
	return 0;
}
