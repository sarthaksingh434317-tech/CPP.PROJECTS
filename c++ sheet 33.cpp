#include <iostream>
using namespace std;

int main() {
    for (int n = 2; n <= 50; n++) {

        if (n % 3 == 0)
            continue;

        bool prime = true;

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << n << " ";
    }

    return 0;
}