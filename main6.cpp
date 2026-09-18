#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    cout << "==========================" << endl;
    cout << "      SIMPLE CALCULATOR   " << endl;
    cout << "==========================" << endl;

    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Modulus (%)" << endl;

    cout << "\nEnter your choice (1-5): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            cout << "Result = " << result;
            break;

        case 2:
            result = num1 - num2;
            cout << "Result = " << result;
            break;

        case 3:
            result = num1 * num2;
            cout << "Result = " << result;
            break;

        case 4:
            if(num2 != 0)
                cout << "Result = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;

        case 5:
            cout << "Result = " << (int)num1 % (int)num2;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}