#include <iostream>
using namespace std;

int main() {
    int choice;
    int a, b;

    do {
        cout << "\n1. Add two numbers";
        cout << "\n2. Multiply two numbers";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Sum = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Product = " << a * b << endl;
                break;

            case 3:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}