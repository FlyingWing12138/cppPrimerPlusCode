#include <iostream>

using namespace std;

unsigned long long Factorial(int n);

int main()
{
    cout << "Input a natural number: ";
    int n;
    while ((cin >> n)&&(0 <= n))
    {
    // cin >> n;
        unsigned long long x = Factorial(n);
        cout << "The factorial of " << n << " is " << x <<endl;

        return 0;
    }
    cout << "Bad input\n";

    return 0;
}

unsigned long long Factorial(int n)
{
    unsigned long x;
    if (0 == n)
        x = 1;
    else
        x = n * Factorial(n - 1);

    return x;
}