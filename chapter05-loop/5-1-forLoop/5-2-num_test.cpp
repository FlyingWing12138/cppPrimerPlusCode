// num_test.cpp __ use numeric test in for loop
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // quites when i is 0
        cout << "i = " << i << "\n";
    cout << "Down now that i = " << i << "\n";

    return 0;
}