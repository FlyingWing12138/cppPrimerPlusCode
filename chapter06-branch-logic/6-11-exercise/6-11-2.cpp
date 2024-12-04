#include <iostream>
#include <array>
#include <cctype>

int main()
{
    using namespace std;

    const int numbers = 10;
    array <double, numbers> donation;
    double input;
    double sum = 0;
    int count = 0;
    int arrayCount = 0;

    cout << "Enter no more than 10 digits: \n";
    // cout << "Enter digit 1: \n";
    // input=cin.get();      // 输入什么都是49
    // while (isdigit(input))
    // while ((cin >> input) && arrayCount < numbers - 1)
    while ((arrayCount < numbers) && (cin >> input))
    {
        donation[arrayCount] = input;
        sum += input;
        ++arrayCount;
        // cout << "Enter digit " << arrayCount + 1 << endl;
        //cin >> input; 
    }
    cout << "arrayCount = " << arrayCount << endl;
    double average = sum / arrayCount;

    for (int i = 0; i <= arrayCount; i++)
    {
        if (donation[i] > average)
            ++count;
    }

    cout << "The average of input is: " << average << endl;
    cout << count << " input(s) was(were) larger than average.\n";

    return 0;
}