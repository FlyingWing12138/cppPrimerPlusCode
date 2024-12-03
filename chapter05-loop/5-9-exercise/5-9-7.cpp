#include <iostream>
#include <cstring>

using namespace std;

struct car
{
    string manufacturer;
    int year;
};

int main()
{
    int num;
    cout << "How many cars do you with to catalog? ";
    cin >> num;
    cin.get();

    car * carCatalog = new car [num];

    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, (carCatalog + i)->manufacturer);
        cout << "Please enter the year made: ";
        cin >> (carCatalog + i)->year;
        cin.get();
    }

    cout << "Here is your collection:\n";

    for (int i = 0; i < num; i++)
    {
        cout << carCatalog[i].year << " " << carCatalog[i].manufacturer << endl;
    }

    delete carCatalog;

    return 0;
}