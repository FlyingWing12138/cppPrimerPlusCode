// arrobj.cpp -- functions with array objects (C++11)
#include <iostream>
#include <array>
#include <string>
// constant data
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expenseS{double expense[Seasons];};

// function to modify array object
void fill(expenseS * pa);
// function that uses array object without modifying it
void show(const expenseS * da);

int main()
{
    expenseS expenseStruct;
    fill(&expenseStruct);     // 数组名就是初始地址
    show(&expenseStruct);
    return 0;
}

void fill(expenseS * pa)
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->expense[i];
    }
}

void show(const expenseS * da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << da->expense[i] << endl;
        total += da->expense[i];
    }
    cout << "Total Expenses: $" << total << endl;
}