#include <iostream>
#include <array>

const int ArSize = 101;      // example of external declaration

int main()
{
    using namespace std;
    //long long factorials[ArSize];
    array<long double, ArSize> factorials = {1, 1};

    //factorials[1] = factorials [0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];

    cout.setf(ios_base::fixed, ios_base::floatfield);

    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << endl;

    return 0;
}