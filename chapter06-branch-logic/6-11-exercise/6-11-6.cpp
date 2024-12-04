#include <iostream>

int main()
{
    using namespace std;

    struct Patrons
    {
        string Name;
        double Money;
    };

    int number;
    cout << "Please enter numbers of patrons: ";
    cin >> number;
    cin.get();
    Patrons *patronList = new Patrons[number];

    for (int i = 0; i < number; i++)
    {
        cout << "Please enter the name of patron " << i + 1 << ": ";
        getline(cin, (patronList + i)->Name);

        cout << "Please enter the amount of donation from patron " << i + 1 << ": ";
        cin >> patronList[i].Money;
        cin.get();
    }

    cout << "\nGrand Patrons: \n";
    int grandPatrons = 0;
    for (int j = 0; j < number; j++)
    {
        if (10000 <= (patronList + j)->Money)
        {
            cout << patronList[j].Name << "\t" << patronList[j].Money << endl;
            grandPatrons += 1;
        }
    }
    if (0 == grandPatrons)
        cout << "None\n";

    cout << "\nPatrons: \n";
    bool isEmpty = true;
    for (int k = 0; k < number; k++)
    {
        if (10000 > patronList[k].Money)
        {
            cout << (patronList + k)->Name << "\t" << patronList[k].Money << endl;
            isEmpty = false;
        }
    }
    if (isEmpty)
        cout << "None\n";

    return 0;
}