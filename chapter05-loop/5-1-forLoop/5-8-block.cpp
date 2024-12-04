// block.cpp -- use a block statement
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "The Amazing Accounto will sum and average ";
    cout << "fibe members for you.\n";
    cout << "Please enter five values:\n";

    double number;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++)
    {                                   // block starts here
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }                                   // block ends here

    cout << "Five exquisite choices indeed! ";
    cout << "They sum to " << sum << endl;
    cout << "and average to " << sum / 5 << ".\n";
    cout << "The Amazing Accounto bids you adieu!\n";

    int x = 20;
    {                                   // block starts
        int y = 100;
        cout << "x = " << x << endl;    // ok
        cout << "y = " << y << endl;    // ok
    }                                   // block ends
    cout << "x = " << x << endl;        // ok
    // cout << "y = " << y << endl;        // invalid, y not defined

    int z = 20;                         // original z
    {
        cout << "z = " << z << endl;    // use original z
        int z = 100;                    // new z
        cout << "z = " << z << endl;    // use new z
    }
    cout << "z = " << z << endl;        // use original z
    return 0;

}