#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Enter a number (0 to exit): ";
        cin >> n;
    } while (n != 0);

    cout << "Program ended.";

    return 0;
}