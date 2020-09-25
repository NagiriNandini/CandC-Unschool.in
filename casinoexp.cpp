#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void rules();
int main()
{
    string name;
    int amnt; 
    int betamnt;
    int guess;
    int dice; 
    char choice;

    srand(time(0)); 
 cout<<"___________________________________________________";
 cout<<"\n              ";
 cout<<"\n\t\t CASINO GAME\t\t\n";
 cout<<"\n____________________________________________________";
    cout <<"\nEnter Your Name: ";
    getline(cin, name);
    cout <<"\nEnter Deposit Amount to play game : $";
    cin >> amnt;
   
    do
    {
        system("cls");
        rules();
        do
        {
            cout<<"Your current balance is $"<<amnt; 
 cout<<"\n"<<name<<"Enter money to bet: $";
            cin >> betamnt;
            if(betamnt > amnt)
                cout <<"You Can not Bet More Than Current Amount\n"
                       <<"\nRe-enter Amount: ";
        }while(betamnt > amnt);

        do
        {
            cout <<"Guess The Number Between 1 To 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "\nNumber Sholud Be Between 1 To 10\n"
                    <<"\nGuess Numer Again: ";
        }while(guess <= 0 || guess > 10);

        dice = rand()%10 + 1;
   
        if(dice == guess)
        {
            cout <<"\nGood luck!!You Won " << betamnt * 10<<"$";
            amnt = amnt + betamnt * 10;
        }
        else
        {
            cout << "Bad luck this time!!You Lose "<< betamnt <<"$\n";
            amnt = amnt - betamnt;
        }

        cout << "\nThe Winning Number Was: " << dice <<"\n";
        cout << "\n"<<name<<", You have " << amnt << "$\n";
        if(amnt == 0)
        {
            cout << "\nSorry  You Don't Have Money To Play \n";
            break;
        }
        cout << "\nYou Want To Play Again Press (y/n)? "; 
        cin >> choice;
    }while(choice =='Y'|| choice=='y');
   
    cout<<"\n-------------------------------------------------------------------------------------\n";
    cout << "Thanks For Playing Game Again Your Current Amount Is " << amnt << "$";
    cout<<"\n-------------------------------------------------------------------------------------\n";

    return 0;
}

void rules()
{
    system("cls");
    cout<<"\n----------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tRULES OF TEH GAME";
    cout<<"\n-----------------------------------------------------------------------------------------------";
    cout << "\n1. Choose Number Between 1 To 10";
    cout << "\n2. If you win you will get 10 times of money you bet";
    cout << "\n3. If you bet on wrong number you will lose your betting amount";
    cout<<"\n-----------------------------------------------------------------------------------------------\n";
}
