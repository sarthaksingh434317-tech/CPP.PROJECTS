#include <iostream>
using namespace std;

int main()
{
    int signal;

    cout << "Enter signal number (1-3): ";
    cin >> signal;

    switch (signal)
    {
        case 1:
            cout << "Red - Stop";
            break;

        case 2:
            cout << "Yellow - Get Ready";
            break;

        case 3:
            cout << "Green - Go";
            break;

        default:
            cout << "Invalid signal";
    }

    return 0;
}