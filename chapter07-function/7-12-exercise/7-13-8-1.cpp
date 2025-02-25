// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <array>
#include <string>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double * pa, int n);
// function that uses array object without modifying it
void show(const double * da, int n);

int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);     // 数组名就是初始地址
    show(expenses, Seasons);
    return 0;
}

void fill(double * pa, int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa[i];
    }
}

void show(const double * da, int n)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}