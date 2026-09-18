#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, c = 0;

    cout << "Before Swapping:"  << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    c = a;
    a = b;
    b = c;
    
    

    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;

    
}