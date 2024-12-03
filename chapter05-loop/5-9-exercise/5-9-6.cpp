#include <iostream>

int main()
{
    using namespace std;

    const int MON = 12;
    const int YEAR = 3;

    const char *months[MON] = {
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
        "December"};

    int sales[YEAR][MON];
    int yearSale[YEAR] = {0, 0, 0};
    int totalSale = 0;

    for (int j = 0; j < YEAR; j++)
    {   
        cout << "Enter book sales for year " << j + 1 << endl;
        for (int i = 0; i < MON; i++)
        {
            cout << "Enter book sales for " << months[i] << " : \n";
            cin >> sales[j][i];
            yearSale[j] += sales[j][i];
        }

        cout << "Book sales for year " << j + 1 << " is " << yearSale[j] << endl;
        totalSale += yearSale[j];
    }

    cout << "Book sales for " << YEAR << " years is " << totalSale << endl;   

    return 0;
}