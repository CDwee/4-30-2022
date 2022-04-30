// Started at 10:17 4-30-2022

// Section 8 Challenge
#include <iostream>

using namespace std;

int main() {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    cout << "Enter an amount in cents: ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    cout << endl;
    
    cout << "-------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "-------------------------" << endl;
    
    balance = dollars = quarters = dimes = pennies = 0; // reset everything to zero
    
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;
    
    cout << "\nYou can provice this change as follows: " << endl;
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    cout << endl;
    return 0;
}

// Section 9
// If Statement

#include <iostream>

using namespace std;

int main() {
    int num {};
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    
    if (num >= min) {
        cout << "\n================= If statement 1 =================" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if (num <= max) {
        cout << "\n================= If statement 2 =================" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if (num >= min && num <= max) {
        cout << "\n================= If statement 3 =================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and true must also display!!" << endl;
    }
    
    if (num == min || num == max) {
        cout << "\n================= If statement 4 =================" << endl;
        cout << "This means all 4 statements display " << endl;
        cout << num << " is right on a boundary " << endl;
    }
    
    cout << endl;
    return 0;
}

// Ended at 12:20 4-30-2022
