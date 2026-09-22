#include <iostream>
using namespace std;

int main()
{
    float amount, discount, finalAmount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount > 1000)
    {
        discount = amount * 0.10;
        finalAmount = amount - discount;
        cout << "Discount = " << discount << endl;
        cout << "Final Amount = " << finalAmount;
    }
    else
    {
        cout << "No discount";
        cout << "\nFinal Amount = " << amount;
    }

    return 0;
}