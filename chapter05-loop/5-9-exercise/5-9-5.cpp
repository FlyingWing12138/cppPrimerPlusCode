#include <iostream>

int main()
{
    using namespace std;

    const int MON = 12;

    const char * months[MON] = {
        "January",
        "Feburary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int sales[12];
    int yearSale = 0;

    for (int i = 0; i < MON; i ++)
    {
        cout << "Enter book sales for " << months[i] << " : \n";
        cin >> sales[i];
        yearSale += sales[i];
    }

    cout << "Book sales for this year is " << yearSale << endl;

    return 0;
}