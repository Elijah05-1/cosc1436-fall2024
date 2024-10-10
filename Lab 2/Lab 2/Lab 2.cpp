// Lab 2 - Loan Calculator 
// Name: Elijah Santin
// Course: Programming Fundamentals 1 COSC-1436-20005
// Date: 10/8/2024

#include <iostream>
#include <iomanip> // for formatted output
#include <algorithm> // for std::min
#include <string> // for std::to_string
using namespace std;

// Function to get valid input in a specified range
double getValidInput(const string& prompt, double min, double max) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (cin.fail() || value < min || value > max) {
            cout << "Invalid input. Please enter a value between " << min << " and " << max << ".\n";
            cin.clear(); // TO clear the input buffer
            cin.ignore(10000, '\n'); // Ignore the  invalid input 
        }
    } while (cin.fail() || value < min || value > max);
    return value;
}

int main() {
    // Display the program information
    cout << "Loan Calculator Program\n";
    cout << "Name: Elijah Santin\n";
    cout << "Course: Programming Fundamentals 1 COSC-1436-20005\n";
    cout << "---------------------------------\n";

    // Story 2: Ask user for initial loan amount
    double loanAmount = getValidInput("Please enter the loan amount ($1 - $1000): ", 1.0, 1000.0);

    // Story 3: Prompt user for interest rate
    double interestRate = getValidInput("Please enter the interest rate (1.0% - 100.0%): ", 1.0, 100.0);
    interestRate /= 100.0; // Convert percentage to a decimal

    // Story 5: Prompt user for monthly payent amount
    double monthlyPayment = getValidInput("How much do you want to pay each month ($0 - $" + to_string(loanAmount) + "): ", 0.0, loanAmount);

    // The variables for storing total interest and payments
    double totalInterest = 0.0;
    double totalPayments = 0.0;

    // Display table header 

    cout << "\nMonth   Balance        Payment        Interest       New Balance\n";
    cout << "----------------------------------------------------------------------\n";

    // Loop through each month
    for (int month = 1; month <= 12; ++month) {
        double interest = (month == 1) ? 0.0 : loanAmount * interestRate; // Interest for the first month is 0
        double payment = min(loanAmount, monthlyPayment); // Payment should not exceed the remaining balance
        double newBalance = loanAmount + interest - payment;

        // Display row
        cout << setw(2) << month << "       $" << setw(9) << fixed << setprecision(2) << loanAmount
            << "      $" << setw(9) << payment << "      $" << setw(9) << interest
            << "      $" << setw(9) << (newBalance < 0 ? 0.0 : newBalance) << "\n";

        // Update totals
        totalInterest += interest;
        totalPayments += payment;

        // Update loan amount
        loanAmount = newBalance < 0 ? 0 : newBalance;

        // If balance is 0, it will stop early
        if (loanAmount <= 0) {
            break;
        }
    }

    // Story 6: Will display the total interest paid and total payments
    cout << "\nTotal                  $" << setw(9) << totalPayments
        << "      $" << setw(9) << totalInterest << "\n";

    return 0;
}