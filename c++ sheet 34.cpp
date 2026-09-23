#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 0, b = 1, c;

    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}