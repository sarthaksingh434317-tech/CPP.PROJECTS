#include <iostream>
using namespace std;

int main()
{
    int choice, n;

    cout << "1. Check Prime" << endl;
    cout << "2. Check Palindrome" << endl;
    cout << "3. Check Armstrong" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            cout << "Enter a number: ";
            cin >> n;

            bool prime = true;

            if (n < 2)
                prime = false;

            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    prime = false;
                    break;
                }
            }

            if (prime)
                cout << "Prime Number";
            else
                cout << "Not a Prime Number";

            break;
        }

        case 2:
        {
            cout << "Enter a number: ";
            cin >> n;

            int original = n;
            int reverse = 0;

            while (n > 0)
            {
                reverse = reverse * 10 + n % 10;
                n /= 10;
            }

            if (original == reverse)
                cout << "Palindrome Number";
            else
                cout << "Not a Palindrome Number";

            break;
        }

        case 3:
        {
            cout << "Enter a number: ";
            cin >> n;

            int original = n;
            int sum = 0;

            while (n > 0)
            {
                int digit = n % 10;
                sum += digit * digit * digit;
                n /= 10;
            }

            if (sum == original)
                cout << "Armstrong Number";
            else
                cout << "Not an Armstrong Number";

            break;
        }

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}