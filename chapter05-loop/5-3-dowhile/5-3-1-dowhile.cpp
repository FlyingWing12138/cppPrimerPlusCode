// dowhile.cpp -- exit-condition loop
#include <iostream>

int main()
{
    using namespace std;

    double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
    for (double x : prices)
        cout << "Original prices: " << x << endl;

    for (double &x : prices)
        x = x * 0.80;   // 20% off sale
    
    for (double x : prices)
        cout << "20% off! Prices: " << x << endl;

    int n;
    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n"; 
    do
    {
        cin >> n;       // execute body
    } while (n != 7);   // the test
    cout << "Yes, 7 is my favorite.\n";

    return 0;
}