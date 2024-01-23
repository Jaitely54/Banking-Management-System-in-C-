# Banking-Management-System-in-Cpp


# Banking System in C++

This documentation covers the implementation details of a simple banking system developed in C++. The application provides a basic console interface for account management including operations like account creation, balance inquiry, deposits, and withdrawals.

## Features 

- **Login**: Users can log in to their existing account using a username and password.
- **Open a New Account**: New users can create an account by choosing a username and password.
- **Inquire Balance**: Users can check their current account balance.
- **Deposit**: Users can deposit money into their account.
- **Withdraw**: Users can withdraw money from their account.
- **Exit**: Users can exit the application.

## How to Run

To run this program:
1. Ensure you have a C++ compiler installed.
2. Compile the source code.
3. Run the compiled program.

## Program Flow

1. **Main Screen**: The user is presented with options to log in, open a new account, or quit.
2. **Login**: If the user selects 'Login', they must enter their username and password.
3. **Account Operations**: Once logged in, the user can perform operations like checking balance, depositing, withdrawing, or returning to the main screen.
4. **Open New Account**: If the 'Open a new account' option is chosen, the user can create a new account by entering a new username and password.
5. **Quit**: The 'Quit' option exits the program.

## Code Structure

The program is structured as follows:
- Variable Declaration: For storing usernames, passwords, transaction amounts, and balance.
- Introduction Screen: Displayed when the program starts.
- Main Loop: Handles the main menu and user inputs.
- Login and Account Management: Within the main loop, it handles login and account operations.

## Limitations & Future Improvements

- **Data Persistence**: Currently, the program does not save user data persistently. Implementing file handling or database integration could be a future enhancement.
- **Error Handling**: The program lacks robust error handling, especially for invalid inputs.
- **User Interface**: The console interface is basic and could be improved for a better user experience.
- **Security**: The application does not encrypt user data, which is crucial for real-world applications.

## Disclaimer

This program is a basic demonstration and not intended for real-world banking operations. It lacks the necessary security features and data handling required for a production-grade banking application.


