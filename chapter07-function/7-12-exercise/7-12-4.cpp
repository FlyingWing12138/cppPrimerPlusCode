// lotto.cpp -- probability of winning
#include <iostream>
// Note: some implementations require double instead of long double

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    // double total, choices;
    // cout << "Enter the total number of choices on the game card and \n"
    //         "the number of picks allowed:\n";
    // while ((cin >> total >> choices) && choices <= total)
    // {
    //     cout << "You have one chance in ";
    //     cout << probability(total, choices);     // compute the odds
    //     cout << " of winning.\n";
    //     cout << "Next two numbers (q to quit): ";
    // }
    // cout << "bye\n";
    cout << "Field 1: 5 out of 47\nField 2: 1 out of 27\n";
    double p1 = 1/probability(47, 5);
    double p2 = 1/probability(27, 1);
    double pn = p1 * p2;
    cout << "Field 1 probability: " << p1 << endl;
    cout << "Field 2 probability: " << p2 << endl;
    cout << "Total probability: " << pn << endl;

    return 0;
}

// the following function calculates the probability of picking picks numbers corrrectly from numbers choices

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;   // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}