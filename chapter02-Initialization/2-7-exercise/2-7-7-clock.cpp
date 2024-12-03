#include <iostream>
using namespace std;

void displayTime(int, int);

int main()
{

    int hour;
    int min;

    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;

    displayTime(hour, min);

    return 0;

}

void displayTime(int hour, int min)
{
    cout << "Time: " << hour << ":" << min;
}