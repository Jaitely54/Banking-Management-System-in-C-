#include<iostream>
using namespace std;

int main()
{
    // ........................ Declaration ........................//
    string username;
    string newUserhandle;
    string password; 
    string Newuser;
    string Newpass;
    double withdraw;
    double deposits;
    double balance = 0; // Initialize balance to 0 for new accounts
    char option;
    char opt;

    // .....................INTRO......................//

    cout<<"\n\t\t    ========================================="<< endl;
    cout<<"\t\t    ========================================="<< endl;
    cout<<"\t\t          ||   WELCOME TO  ATM   ||"<< endl;
    cout<<"\t\t    ========================================="<< endl;
    cout<<"\t\t    =========================================\n\n";
    cout<<"\t..................................................................\n\n"<<endl;

    do
    {
        // ...........................MAIN MENU...........................
        cout<<"     MAIN SCREEN    \n"<<endl;
        cout<<"[L] Login \n";
        cout<<"[O] Open a new account \n";
        cout<<"[Q] Quit \n";
        cout<<"\n";
        cout<<"Enter Option:";
        cin>>option;
        cout<<endl;

        switch (option)
        {
            case 'L': // FOR LOGIN
                cout<<"Enter the Username: ";
                cin>>username;
                cout<<endl;
                cout<<"Enter the Password: ";
                cin>>password;
                cout<<endl;

                if (username == Newuser && password == Newpass)
                {
                    cout<<"!!!! access Granted !!!!!"<<endl;
                    do // LOOP 2
                    {
                        // ...................ANOTHER MENU..............................
                        cout<<endl;
                        cout<<"     WELCOME SIR !    \n"<<endl;
                        cout<<"[I] Inquire Balance \n";
                        cout<<"[W] Withdraw \n";
                        cout<<"[D] Deposit \n";
                        cout<<"[B] Back to main screen \n";
                        cout<<"\n";
                        cout<<"Enter Option:";
                        cin>>opt;

                        switch (opt)
                        {
                            case 'D': // Deposits
                                cout<<"Enter the amount you want to deposit: $";
                                cin>>deposits;
                                balance += deposits; // Update balance after deposit
                                cout<<"Total balance: $"<< balance <<endl;
                                break;
                            case 'W': // Withdraw
                                cout<<"Enter the amount you want to withdraw: $";
                                cin>>withdraw;
                                cout<<endl;

                                if (balance < withdraw)
                                {
                                    cout<<"Insufficient balance! Please try again"<<endl;
                                    cout<<"Your balance: $" << balance << endl;
                                }
                                else
                                {
                                    balance -= withdraw; // Update balance after withdrawal
                                    cout<<"$"<<withdraw<<" has been debited from your account"<<endl;
                                    cout<<"Remaining balance: $"<< balance <<endl;
                                }
                                break;
                            case 'I': // Check balance
                                cout<<"Your balance: $"<< balance <<endl;
                                break;
                            case 'B':
                                cout<<"Thanks for using us !!"<<endl;
                                break;
                            default:
                                cout<<"Invalid option! Try again";
                                break;
                        }
                    } while (opt != 'B');
                }
                else
                {
                    cout<<"!!!! Login Failed !!!!"<<endl;
                }
                break;
            case 'O': // FOR OPENING A NEW ACCOUNT
                cout<<"Enter your Username : ";
                cin>>Newuser;
                cout<<endl;
                cout<<"Enter your Password: ";
                cin>>Newpass;
                cout<<endl;
                balance = 0; // Reset balance for new account
                break;
            case 'Q': // FOR QUITTING
                cout<<"\nTHANKS FOR USING \n";
                break;
            default: // FOR INVALID KEY PRESSED
                cout<<"\n That is an invalid option. Please enter the correct option: \n";
                break;
        }

    } while (option != 'Q');
    
    return 0;
}
