#include <iostream>

int main()
{
    using namespace std;

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = rows - 1; j > i; j--)
            cout << ".";

        for (int k = 0; k <= i; k++)
            cout << "*";
        
        cout << endl;
    }

    return 0;
}