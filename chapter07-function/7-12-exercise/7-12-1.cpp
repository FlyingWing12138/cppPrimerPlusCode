#include <iostream>

float HarmonicMean(float x, float y);

int main()
{
    using namespace std;
    float x;
    float y;
    cout << "Please enter two numbers:";
    while ((cin >> x >> y) && (x != 0) && (y != 0))
    {
        float HM = HarmonicMean(x, y);
        cout << "The harmonic mean of " << x << " and " << y 
             << " is " << HM << endl;
        cout << "Please enter another two numbers:";
    }
    cout << "Finished.\n";
}

float HarmonicMean(float x, float y)
{
    return 2*x*y/(x+y);
}