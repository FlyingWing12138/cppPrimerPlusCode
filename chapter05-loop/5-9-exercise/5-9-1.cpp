#include <iostream>

int main()
{
    using namespace std;

    int n;
    int m;
    int sum = 0;
    
    cout << "Enter first integer (the smaller one): \n";
    cin >> n;
    cout << "Enter second integer (the larger one): \n";
    cin >> m;

    for (int i = n; i <= m; i++)
    {
        sum = sum + i;
    } 

    cout << "The sum between " << n << " and " << m << " is " << sum << endl;

    return 0;
}