#include <iostream>

int main()
{
    using namespace std;

    double income;
    double tax;
    const double taxLevel1 = 5000;
    const double taxLevel2 = 15000;
    const double taxLevel3 = 35000;

    cout << "Please enter your income: \n";
    while ((cin >> income) && (income > 0))
    {
        //if (income < 0)
        //{
        //    cout << "Please enter a positive number.\n";
        //    break;
        //}
        //else if (0 > income - taxLevel1)
        if (0 > income - taxLevel1)
            tax = 0;
        else if (0 > income - taxLevel2)
            tax = (income - taxLevel1) * 0.1;
        else if (0 > income - taxLevel3)
            tax = (taxLevel2 - taxLevel1) * 0.1 + (income - taxLevel2) * 0.15;
        else
            tax = (taxLevel2 - taxLevel1) * 0.1 + (taxLevel3 - taxLevel2) * 0.15 + (income - taxLevel3) * 0.2;

        cout << "Your tax: " << tax << endl;
    }

    return 0;
}