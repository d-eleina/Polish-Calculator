#include <iostream>
#include <cstring>
using namespace std;

int main() {
    double numberOne, numberTwo;
    char operators;
    cout << "expression example: \"+ 2 3\"\n";
    
    while(true) {
        cout << "Enter the expression (enter \"q\" when finished): ";
        cin >> operators;
        
        if(!(cin >> numberOne && cin >> numberTwo)) {
            cout << "Not a valid number";
            return 1;
        }
        cout << "\n";
        
        switch (operators) {
            case '+':
                cout << numberOne << " + " << numberTwo << " = " << numberOne + numberTwo << "\n";
                break;

            case '-':
                cout << numberOne << " - " << numberTwo << " = " << numberOne - numberTwo << "\n";
                break;

            case '*':
                cout << numberOne << " * " << numberTwo << " = " << numberOne * numberTwo << "\n";
                break;
                
            case '/':
                cout << numberOne << " / " << numberTwo << " = " << numberOne / numberTwo << "\n";
                break;
                
            default:
                cout<< "Not a valid operator.";
                return 1;
            }
        }

    return 0;
}
