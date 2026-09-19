#include <iostream>
using namespace std;

int main()
{
    int year, month;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter month (1-12): ";
    cin >> month;

    int days;

    if (month == 2)
    {
        days = 28;
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    cout << "\nCalendar\n";
    cout << "Month: " << month << "  Year: " << year << endl;
    cout << "---------------------------\n";

    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int startDay = 0;

    for (int i = 0; i < startDay; i++)
    {
        cout << "    ";
    }

    for (int day = 1; day <= days; day++)
    {
        cout << day << "   ";

        if ((day + startDay) % 7 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}