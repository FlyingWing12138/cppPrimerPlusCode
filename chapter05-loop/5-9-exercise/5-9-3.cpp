#include <iostream>

int main()
{
    using namespace std;

    double sum = 0;
    double n;

    do{
        cout << "Enter a number: \n";
        cin >> n;
        sum = sum + n;
    } while (n != 0);

    cout << "The sum of entered number is: " << sum << endl;

    return 0;
}